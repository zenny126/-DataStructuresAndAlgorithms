#include <iostream>
#include <iomanip>
#define MAX 100
using namespace std;
int X[MAX], n, dem = 0;
bool chuaxet[MAX];
void
                Init()
{ // thiết lập giá trị cho n
    cout << "\n Nhập n=";
    cin >> n;
    for (int i = 1; i <= n; i++) // thiết lập giá trị cho mảng chuaxet[]
        chuaxet[i] = true;
}
void Result(void)
{ // Đưa ra hoán vị hiện tại
    cout << "\n";
    for (int i = 1; i <= n; i++)
        cout << X[i] << " ";
}
void Try(int i)
{ // thuật toán quay lui duyệt các hoán vị của 1, 2, .., n.
    for (int j = 1; j <= n; j++)
    { // duyệt các khả năng j cho thành phần xi
        if (chuaxet[j])
        {                       // nếu khả năng j đúng chưa được dùng đến
            X[i] = j;           // thiết lập thành phần xi là j
            chuaxet[j] = false; // thiết lập chuaxet[j] đã được dùng
            if (i == n)         // nếu xi đã là thành phần cuối cùng
                Result();       // ta đưa ra kết quả
            else                /// trong trường hợp khác
                Try(i + 1);     // ta xác định tiếp thành phần thứ i+1
            chuaxet[j] = true;  // nhớ hoàn trả lại giá trị cho chuaxet[j]
        }
    }
}
int main(void)
{
    Init();
    Try(1);
}
