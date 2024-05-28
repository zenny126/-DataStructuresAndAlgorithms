#include <iostream>
#include <algorithm>
using namespace std;
void print(int a[], int n){
    cout<<a[0]<< " ";
    for(int i=1;i<n;i++){
        if(a[i]!=a[0]){
            cout<<a[i]<<endl;
            return;
        }
    }
}
int main(){
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
        if(a[0]!=a[n-1]){
            print(a,n);
        }
        else{
            cout<<-1<<endl;
        }
    }
    
}