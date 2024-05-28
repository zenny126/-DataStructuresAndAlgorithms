#include <iostream>
using namespace std;
int n;
int x[100];
void init(){
    cin>>n;
}
bool check(){
    for(int i=0;i<n/2 +1;i++){
        if(x[i]!=x[n-1-i]) return false;
    }
    return true;
}
void result(){
    if(!check()) return;
    for(int i=0;i<n;i++){
        cout<<x[i]<< ' ';

    }
    cout<<endl;
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

int main (){
    init();
    back_track(0);
}