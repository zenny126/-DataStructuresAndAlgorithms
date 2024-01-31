#include <iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    while (t--)
    {
       int n;
       cin>>n;
       int k;
       cin>>k;
       int kq=-1;
       while (n--)
       {
            int x;
            cin>>x;
            if(x==k){
                kq=1;
            }
       }
       cout<< kq<<endl;
       
    }
    
}