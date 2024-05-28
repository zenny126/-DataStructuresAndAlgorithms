#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
   int t;
   cin>>t;
   while (t--)
   {    
        int count=0;
        int n;cin>>n;
       int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        for(int i=0;i<n;i++){
            if(a[i]!=b[i])
            count++;
        }
        if(count %2==0) count=count/2;
        if(count %2!=0) count= count/2+1;
        cout<< count<<endl;
   }
    
   return 0;
}
