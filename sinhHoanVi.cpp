#include <iostream>

using namespace std;

// Hàm in mảng
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "";
    }
    cout << endl;
}

// Hàm sinh hoán vị
void generatePermutations(int arr[], int n, int index) {
    if (index == n) {
        // Đã đến hoán vị cuối cùng, in mảng
        printArray(arr, n);
        return;
    }

    // Lặp qua tất cả các phần tử từ index đến n-1
    for (int i = index; i < n; i++) {
        // Hoán đổi phần tử ở vị trí index và i
        swap(arr[index], arr[i]);

        // Đệ quy để sinh hoán vị cho các phần tử còn lại
        generatePermutations(arr, n, index + 1);

        // Hoán đổi ngược lại để trả lại trạng thái ban đầu
        swap(arr[index], arr[i]);
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int arr[n] ;
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    // Gọi hàm sinh hoán vị
    generatePermutations(arr, n, 0);
    }
    // Khai báo một mảng cần sinh hoán vị
    

    return 0;
}
