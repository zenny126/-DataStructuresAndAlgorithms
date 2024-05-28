#include <iostream>
#include<algorithm>
using namespace std;
void kq(int a[],int n){
    int max=0;
    int cur=1;
    int lastNum=a[0];
    int amax=a[0];
    
    for(int i=1;i<n;i++){
        if(a[i]== lastNum)
        {
            cur++;
            if(cur>max){
                max= cur;
                amax =a[i];
            }
        }
        else{
        cur=1;
        lastNum = a[i]; 
        }
        
    }
    
    if(max>=n/2) cout<< amax<<endl;
    if(max<n/2) cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        kq(a,n);
        
    }
    
}