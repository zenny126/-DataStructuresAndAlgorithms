#include <iostream>
#include <string>
using namespace std;
bool OK = true;
int count=0;
int n;
float arr[6],a,b;
float arr1[6];

void CountSum()
{
     

    int i = n;
    while (i > 0 && arr1[i])
    {
        arr1[i] = 0;
        
        i--;
    }
    if (i > 0)
    {
        arr1[i] = 1;
        
    }
    else
        OK = false;
    float sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr1[j])
                sum = sum + arr[j];
        }
        if(sum<a ||sum>b) count++;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        OK=true;
        cin >> n;
    
    cin >> a;
   
    cin >> b;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr1[i] = 0;
    }
    count=0;
    while(OK){
        CountSum();
    }
    cout<<count<<endl;
    }
    
    
}