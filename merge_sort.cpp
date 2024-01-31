#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> left_half(n1);
    vector<int> right_half(n2);

    for (int i = 0; i < n1; i++)
        left_half[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        right_half[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2) {
        if (left_half[i] <= right_half[j]) {
            arr[k] = left_half[i];
            i++;
        } else {
            arr[k] = right_half[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = left_half[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right_half[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void merge_sort_and_print(vector<int>& arr) {
    merge_sort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        merge_sort_and_print(A);
    }

    return 0;
}
