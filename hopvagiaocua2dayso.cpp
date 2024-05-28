#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int k; cin>>k;
        int count=0;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        while(k--){
            for(int i=0;i<n-k;i++){
                int h=a[i]-a[i+k];
                
                if((h>-3) && (h<3))
                     count++;
                }
        }
        
           
        
        cout<<count<<endl;
    }
}   
