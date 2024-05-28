Thuật toán Back - Track(int i)
{
    for (j = <Khả năng 1>; j <= ni; j++)
    {
        if (<chấp thuận khả năng j>)
        {
            X[i] = <khả năng j>;
            if (i == n)
                Result();
            else
                Back - Track(i + 1);
        }
    }
}

void Try(int i)
{
    for (int j = X[i - 1] + 1; j <= N - K + i; j++)
    {
        X[i] = j;
        if (i == K)
            Result();
        else
            Try(i + 1);
    }
}

void Try(int i)
{
    for (int j = 1; j <= N; j++)
    {
        if (chuaxet[j])
        {
            X[i] = j;
            chuaxet[j] = False;
            if (i == N)
                Result();
            else
                Try(i + 1);
            Chuaxet[j] = True;
        }
    }
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (Cot[j] && Xuoi[i – j + n] && Nguoc[i + j - 1])
        {
            X[i] = j;
            Cot[j] = FALSE;
            Xuoi[i - j + n] = FALSE;
            Nguoc[i + j - 1] = FALSE;
            if (i == n)
                Result();
            else
                Try(i + 1);
            Cot[j] = TRUE;
            Xuoi[i - j + n] = TRUE;
            Nguoc[i + j - 1] = TRUE;
        }
    }
}


Algorithm Greedy-Activities- Selection( N, S[], F[] ):
Input: 
• N là số lượng hành động (công việc).
• S[] thời gian bắt đầu mỗi hành động.
• F[] thời gian kết thúc mỗi hành động.
Ouput:
• Danh sách thực thi nhiều nhất các hành động.
Actions:
Bước 1 (sắp xếp). Sắp xếp các hành động theo thứ tự 
tăng dần của thời gian kết thúc.
Bước 2 (Khởi tạo) Lựa chọn hành động đầu tiên làm 
phương án tối ưu ( OPT=1). N = N\ {i};
Bước 3 (Lặp). 
for each activities jN do {
if ( S[j] >= F[i] ) {
OPT = OPTj; i = j; N = N\{i}
}
}
Bước 4 (Trả lại kết quả).
Return (OPT)
EndActions


Chương trình nâng x lên lũy thừa n bằng kỹ thuật chia và trị được thể hiện như sau:
#include <iostream>
#include <iomanip>
using namespace std;
int power(int x, unsigned int n){
 if( n == 0)
 return 1;
 else if (n%2 == 0)
 return power(x, n/2)*power(x, n/2);
 else
 return x*power(x, n/2)*power(x, n/2); 
}
47
int main(){
 int x = 2;
 unsigned int n = 5; 
 cout<<power(x, n)<<setw(3);


 Chương trình giải quyết bài toán được thực hiện như dưới đây:
#include <iostream>
#include <fstream>
#define MAX 100
using namespace std;
int X[MAX]; // phương án tối ưu của bài toán
int n; //số lượng đồ vật
float b, weight=0; //trọng lượng túi
float cost=0; // giá trị sử dụng phương án hiện tại
int XOPT[MAX]; //phương án tối ưu của bài toán
float FOPT=0; //giá trị tối ưu của bài toán
float A[MAX], C[MAX];//vector trọng lượng và giá trị sử dụng
void Init (void) { //đọc dữ liệu
ifstream fp("caitui.in"); fp>>n;fp>>b;
 for(int i=1; i<=n; i++){ 
 fp>>A[i]>>C[i];
 }
 fp.close();
}
void Result(void) {//đưa ra giá trị và phương án tối ưu
 cout<<"Giá trị tối ưu:"<<FOPT<<endl;
 cout<<"Phương án tối ưu:";
 for(int i=1; i<=n; i++)
 cout<<XOPT[i]<<" ";
}
void Update(void) { //cập nhật phương án tối ưu
 if (cost> FOPT){
 FOPT =cost;
 for (int i=1; i<=n; i++)
 XOPT[i]=X[i];
 }
}
void Back_Track(int i){
 int j, t = (int)((b-weight)/A[i]); //giá trị khởi đầu
 for(int j= t; j>=0; j--){
51
 X[i] = j;
 weight = weight+A[i]*X[i]; //trọng lượng phương án bộ phận
 cost = cost + C[i]*X[i]; //giá trị phương án bộ phận
 if (i==n) Update(); //ghi nhận kỷ lục
 else if ( cost + ( C[i+1]*((b- weight)/A[i+1]))>FOPT) //kiểm tra cận
 Back_Track(i+1);
 weight = weight-A[i]*X[i];
 cost = cost - C[i]*X[i];
 }
}
int main (void ){ //chương trình chính
 Init(); Back_Track(1);Result();
}



Chương trình giải bài toán cái túi bằng qui hoạch động được thể hiện như dưới đây.
#include <iostream>
#include <fstream>
#define MAX 100
using namespace std;
int X[MAX], A[MAX], C[MAX],F[MAX][MAX],n, B;
void Init(void) {//khởi tạo dữ liệu
 ifstream fp("caitui.in");fp>>n>>B; //đọc số lượng đồ vật và trọng lượng túi
 for(int i=1; i<=n; i++) //đọc vector trọng lượng và giá trị sử dụng
 fp>>A[i]>>C[i];
for(int i=1; i<=n; i++) //khởi đầu bảng phương án
54
 for(int i=0; i<=B; i++)
 F[0][i]=0;
 fp.close();
}
void Optimization(void) {//thuật toán qui hoạch động
 int i, j;
 for (i =1; i<=n; i++){
 for(j=0; j<=B; j++){
 F[i][j] = F[i-1][j];
 if (j>=A[i] && F[i][j]<F[i-1][j-A[i]]+ C[i]) 
 F[i][j]= F[i-1][j-A[i]]+C[i]; 
 }
 } 
}
void Trace(void){ //lần vết
 cout<<"\n Giá trị tối ưu:"<<F[n][B];
 cout<<"\n Phương án tối ưu:";
 while(n!=0) {
 if(F[n][B]!=F[n-1][B]) {
 cout<<n<<" ";
 B = B-A[n];
 }
 n--;
 } 
}
int main (void ) {
 Init();Optimization();Trace();
}





int X[MAX], n, dem = 0; //sử dụng các biến toàn cục X[], n, OK, dem
bool OK =true;
void Init(void){ //khởi tạo xâu nhị phân đầu tiên
cout<<"Nhập n="; cin>>n;
for(int i = 1; i<=n; i++) //thiết lập xâu với n số 0
X[i]=0;
}
void Result(void){ //đưa ra xâu nhị phân hiện tại
cout<<"\n Xâu thứ "<<++dem<<":";
for(int i=1; i<=n; i++)
 cout<<X[i]<<setw(3);
}
void Next_Bits_String(void){ //thuật toán sinh xâu nhị phân kế tiếp
int i=n;
while(i>0 && X[i]){ //duyệt từ vị trí bên phải nhất
X[i]=0; //nếu gặp X[i] = 1 ta chuyển thành 0
i--; //lùi lại vị trí sau
}
if (i>0) X[i]=1; //gặp X[i] =0 đầu tiên ta chuyển thành 1
else OK = false; //kết thúc khi gặp xâu có n số 1
}
int main(void){ //đây là thuật toán sinh
Init(); //thiết lập cấu hình đầu tiên
while(OK){//lặp khi chưa phải cấu hình cuối cùng
Result(); //đưa ra cấu hình hiện tại
Next_Bits_String(); //sinh ra cấu hình kế tiếp
}
}
