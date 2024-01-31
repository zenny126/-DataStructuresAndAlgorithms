#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isPL(string str) {
    int left = 0;
    int right = str.length() - 1;

    if(str[left]=='6') return false;
    if(str[right]=='8') return false;
    for(int i=0;i<str.length()-1;i++){
        if(str[i]=='8'&str[i+1]=='8') return false;
    }
    for(int i=0;i<str.length()-3;i++){
        if(str[i]=='6'&str[i+1]=='6'&str[i+2]=='6'&str[i+3]=='6') return false;
    }
    return true;
}

void generate(int n, string current) {
    if (n == 0) {
        if (isPL(current)) {
            cout<<current<<endl;
        }
        return;
    }
    generate(n - 1, current + "6");
    generate(n - 1, current + "8");
}

int main() {
    int n;
    cin >> n;
    generate(n, "");

    return 0;
}
