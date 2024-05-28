
#include <iostream>
#include <iomanip>
using namespace std;
void swap(int *a, int *b)
{ // đổi chỗ a và b
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int l, int h)
{                    // thuật toán partition chốt h
    int x = arr[h];  // x chính là chốt
    int i = (l - 1); // i lấy vị trí nhỏ hơn l
    for (int j = l; j <= h - 1; j++)
    { // duyệt từ l đến h-1
        // If current element is smaller than or equal to pivot
        if (arr[j] <= x)
        {                           // nếu arr[j] bé hơn hoặc bằng chốt
            i++;                    // tăng i lên một đoen vị
            swap(&arr[i], &arr[j]); // đổi chỗ arr[i] cho arr[j]
        }
    }
    swap(&arr[i + 1], &arr[h]); // đổi chỗ cho arr[i+1] và arr[h]
    return (i + 1);             // đây là vị trí của chốt
}
void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h); // tìm vị trí của chốt
        quickSort(arr, l, p - 1);     // trị nửa bên trái
        quickSort(arr, p + 1, h);     // trị nửa bên phải
    }
}
void printArray(int arr[], int size)
{ // thủ tục in kết quả
   
     int i;
    cout << "\n Dãy được sắp:";
    for (i = 0; i < size; i++)
        cout << arr[i] << setw(3);
}
int main()
{ // chương trình chính
    int arr[] = {10, 27, 15, 29, 21, 11, 14, 18, 12, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printArray(arr, n);
}
