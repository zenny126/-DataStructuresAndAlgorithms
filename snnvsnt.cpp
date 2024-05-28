#include <iostream>
#include <algorithm>
using namespace std;

bool checkArr(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != a[0]) 
            return false;
    }
    return true;
}

void printArr(int a[], int n) {
    cout << a[0] << " ";
    for (int i = 0; i < n; i++) {
        if (a[i] != a[0]) {
            cout << a[i];
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);

        if (checkArr(a, n)) {
            cout << -1;
        } else {
            printArr(a, n);
        }
        cout << endl; // Added for formatting
    }

    return 0;
}
