#include <iostream>
#include <string>
using namespace std;
int charMaxCount(string str){
    int max=0;
    int len= str.length();
    for(int i=0;i<len;i++){
        int count=0;
        for(int j=0;j<len;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>max) max= count;
    }
    return max;
}
int cansort(string str){
    if(str.length()%2==0){
        if(charMaxCount(str)<=str.length()/2) return 1;
    }
    if(charMaxCount(str)<=(str.length()+1)/2) return 1;
    
    return -1;
}
using namespace std;
int main(){
    int t;
    cin>> t;
    cin.ignore();
    while (t--)
    {
       string str;
       getline(cin,str);
       cout<<cansort(str)<<endl;
    }
    
}