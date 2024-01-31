#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
    int n,m;
    int l;
    cin>>n;
    cin>>m;
    l=n+m;
    int a[l];
    for(int i=0;i<l;i++){
        cin>>a[i];
    }
    sort(a, a+l);
     for(int i=0;i<l;i++){
        cout<< a[i]<<" ";
    }
    cout<<endl;
    }
    
}