#include <iostream>
#include <unordered_map>
#include<algorithm>
using namespace std;

int interpolationSearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;

    while (low <= high && x >= arr[low] && x <= arr[high]) {
        
        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (x - arr[low]);

        
        if (arr[pos] == x)
            return pos;

        
        if (arr[pos] < x)
            low = pos + 1;
        
        else
            high = pos - 1;
    }

    return -1; // Element not found
}

int findMajorityElement(int arr[], int n) {
    unordered_map<int, int> freqMap;

    
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    
    for (auto it : freqMap) {
        if (it.second > n / 2) {
            return it.first;
        }
    }

    return -1;
}

int main() {
    char X='D';
    cout<<X-'A'+1;
    cout<<char(45);
}
