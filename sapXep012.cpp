#include <iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        int count0=0;
        int count1=0;
         int count2=0;
        while(n--){
            int x;
            cin>> x;
            if(x==0) count0++;
            if(x==1) count1++;
            if(x==2) count2++;
        }
        while (count0--)
        {
            cout<<"0 ";
        }
        while (count1--)
        {
            cout<<"1 ";
        }
        while (count2--)
        {
            cout<<"2 ";
        }
        cout<<endl;
    }
}