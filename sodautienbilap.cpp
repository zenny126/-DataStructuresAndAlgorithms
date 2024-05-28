#include <iostream>
#include <algorithm>

using namespace std;
int kq(int a[],int n){
    for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j])    // O(n*Log(n))
                return a[i];
            }
        }
    return -1;
}
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        if (kq(a,n)>=0) {
            cout << kq(a,n)<< endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
