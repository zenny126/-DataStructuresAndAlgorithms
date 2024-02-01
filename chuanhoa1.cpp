#include <iostream>
#include <string>
using namespace std;
void chuanHoa(string str){
    for(int i=0;i<str.length()-1;i++){
        if(str[i]=' '& str[i+1]==' '){
           str.erase(i,1);
        }
    }
    cout<< str;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string str;
        getline(cin,str);
        chuanHoa(str);
    }
    return 0;
}
