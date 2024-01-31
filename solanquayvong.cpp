#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int imin=0;
        long long min=1000000000000000000;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x<min){
                min=x;
                imin=i;
            }
        }
        cout<<imin<<endl;
    }
    
}