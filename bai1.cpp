#include<iostream>
using namespace std;
int n;
int tong=0;
int a[]={1,2,5,10,20,50,100,200,500,1000};
void Init(){
    cin>>n;

}
void Greedy(){
    tong=0;
    for(int i=9;i>=0;i--){
        tong+=n/a[i];
        n %=a[i];
        if(n==0) break;
    }
    cout<< tong<<endl;
}
int main (){
    int t;
    cin>>t;
    while(t--){
    Init();
    Greedy();
    }
    
}