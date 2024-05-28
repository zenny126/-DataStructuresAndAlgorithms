#include<iostream>
#include <algorithm>
using namespace std;
int n;
long long a[20];
long long so1;
long long so2;
void Init(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // if(a[0]=0){
    //     int x=a[0];
    //     a[0]=a[2];
    //     a[2]=
    // }
}
void Greedy(){
    sort(a,a+n);
    so1=0;
    so2=0;
    for (int i=0;i<n;i++){
        if(i%2==0){
            so1=so1*10 +a[i];
        }
        else{
            so2=so2*10+a[i];
        }
    }
    cout<<so1+so2<<endl;
}
int main (){

    int t;
    cin>>t;
    while(t--){
    Init();
    Greedy();
    }
    
}