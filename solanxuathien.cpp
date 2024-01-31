#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int count=0;
        int k;
        cin>>k;
        while (n--)
        {
            int x;
            cin>> x;
            if(x==k) count++;
        }
        if(count==0) count=-1;
        cout<<count<<endl;
    }
    
}
