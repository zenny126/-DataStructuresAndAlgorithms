#include <iostream>
#include <iomanip>
#define MAX 100
using namespace std;
int X[MAX], n, dem = 0;
bool COT[MAX], DCXUOI[MAX], DCNGUOC[MAX];
int count=0;
;
void Init()
{ // thiết lập kích cỡ bàn cờ
count=0;
        cin >> n;
    for (int i = 1; i <= n; i++)
    { // thiết lập tất cả các cột đều chưa bị án ngữ
         COT[i] = true;
    }
    for (int i = 1; i < 2 * n; i++)
    {                      // thiết lập các đường chéo
        DCXUOI[i] = true;  // đường chéo xuôi chưa bị án ngữ
        DCNGUOC[i] = true; // đường chéo ngược chưa bị án ngữ
    }
}
void Result(void)
{ // đưa ra một phương án
    count++;
}
void Try(int i)
{ // đây là thuật toán quay lui
    for (int j = 1; j <= n; j++)
    { // duyệt các khả năng j đặt quân hậu vào hàng i
        if (COT[j] && DCXUOI[i - j + n] && DCNGUOC[i + j - 1])
        {
            // nếu đúng cột j, đường chéo xuôi i-j +n, đường chéo ngược i+j-1
            //  chưa bị án ngữ
            X[i] = j;                   // ta đặt được quân hậu hàng i vào vột j
            COT[j] = false;             // cột j đã bị án ngữ
            DCXUOI[i - j + n] = false;  // đường chéo xuôi i-j+n bị án ngữ
            DCNGUOC[i + j - 1] = false; // đường chéo ngược i+j-1 bị án ngữ
            if (i == n)                 // nếu đây là quân hậu hàng n
                Result();               // ta đưa ra phương án hiện tại
            else                        // trong trường hợp khác
                Try(i + 1);             // ta đặt tiếp quân hậu hành i+1
            COT[j] = true;              // nhớ trả lại giá trị cột j
            DCXUOI[i - j + n] = true;   // trả lại giá trị đường chéo xuôi
            DCNGUOC[i + j - 1] = true;  // trả lại giá trị đường chéo ngược
        }
    }
}
int main(void)
{
    Init();
    Try(1);
    cout<<count<<endl;
}