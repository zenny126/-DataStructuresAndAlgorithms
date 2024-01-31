#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isHAHA(string str) {
    int left = 0;
    int right = str.length() - 1;
    if(str[left]!='H') return false;
    if(str[right]!='A') return false;
    for(int i=0;i<str.length()-1;i++){
        if(str[i]=='H'&str[i+1]=='H') return false;
    }
    return true;
}

void generate(int n, string current) {
    if (n == 0) {
        if (isHAHA(current)) {
            cout<<current<<endl;
        }
        return;
    }
    generate(n - 1, current + "A");
    generate(n - 1, current + "H");
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
       int n;
    cin >> n;
    generate(n, "");
    }
    
    

    return 0;
}
