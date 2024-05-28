#include<iostream>
#include<algorithm>
using namespace std;
int n;
int x[100],a[100];
void init(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
}
bool checkNt(int a){
    if(a==0) return false;
    for(int i=2;i<a/2;i++){
        if(a%i==0) return false;
    }
    return true;
}
void result(){
    int sum=0;
    for(int i=0;i<n;i++) {
        if(x[i]==1){
            sum+=a[i];
            
        }
    }
    if(checkNt(sum)){
                for (int i = 0; i <n; i++)
                {
                    if(x[i]) cout<<a[i]<<" ";
                }
                cout<<endl;
                
            }
    
}
void back_track(int i){
    for(int j=0;j<=1;j++){
        x[i]=j;
        if(i==n-1){
            result();

        }
        else{
            back_track(i+1);
        }
    }
}
int main(){
    init();
    back_track(0);
}