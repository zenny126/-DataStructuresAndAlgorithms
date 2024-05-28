#include<iostream>
using namespace std;
int a[100],n;
void Init(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void Row(){
    if(n==0) return;
    else{
        cout<<"["<<a[0];
        for(int i=1;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<"]"<<endl;
    for(int i=0;i<n;i++){
        a[i]=a[i]+a[i+1];
    }
        n--;
        Row();
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Init();
    Row();
    }
    

}