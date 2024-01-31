#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
void printString(string str){
    char last=str[0];
    cout<<last<< " ";
    for(int i=1;i<str.length();i++){
       if(str[i]!=last) {
            last=str[i];
            cout<<last<< " ";
       }
    }
}
int main(){
    int t;
    cin>> t;
    cin.ignore();
    while (t--)
    {
        string num,str;
        getline(cin,num);
        getline(cin,str);
        sort(str.begin(),str.end());
        str.erase( remove( str.begin(), str.end(), ' ' ), str.end() );
        printString(str);
        cout<<endl;
    }
    
}