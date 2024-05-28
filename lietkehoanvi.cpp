#include <iostream>
#include <iomanip>
#define MAX 100
int X[MAX], n;
char x;
bool OK = true;
using namespace std;
bool is15(int x){
    if(x==1||x==5) return true;
    return false;
}
bool check(int a[],int n){
    for(int i=2;i<=n-1;i++){
        if(is15(a[i])&& !is15(a[i-1])&& !is15(a[i+1])) return false;
    }
    return true;
}
void Init(void)
{ 
    
    cin >> x;
    n=x-'A'+1;
    for (int i = 1; i <= n; i++) 
        X[i] = i;
}
void Result(void)
{   
    if(check(X,n)){
        for (int i = 1; i <= n; i++)
        cout << char(X[i]+'A'-1 );
        cout<<endl;
    }
    
    
}
void Next_Permutation(void)
{                                   
    int j = n - 1;                   
    while (j > 0 && X[j] > X[j + 1]) 
        j--;
    if (j > 0)
    {                       
        int k = n;       
        while (X[j] > X[k]) 
            k--;
        int t = X[j];
        X[j] = X[k];
        X[k] = t; 
        int r = j + 1, s = n;
        while (r <= s)
        { 
            t = X[r];
            X[r] = X[s];
            X[s] = t;
            r++;
            s--;
            
        }
    }
    else            
        OK = false;
}
int main(void)
{           
    Init(); 
    while (OK)
    {                       
        Result();          
        Next_Permutation();
    }
}
