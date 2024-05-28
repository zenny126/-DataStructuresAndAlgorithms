#include<iostream>
using namespace std;
int n,k,x[100];
void init(){
    cin>>n>>k;
}
void result(){
    for(int i=1;i<=k;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
void back_track(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
        if(i==k){
            result();
        }
        else{
            back_track(i+1);
        }
    }
}
int main(){
    init();
    x[0]=0;
    back_track(1);
}