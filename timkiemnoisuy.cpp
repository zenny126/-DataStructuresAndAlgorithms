#include <iostream>
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

    return -1; 
}

int main() {
    
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        
        cout<<interpolationSearch(a,n ,4);
    }
    

}
