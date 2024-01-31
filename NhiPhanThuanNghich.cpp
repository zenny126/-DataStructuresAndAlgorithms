#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
void printString(string str){
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
}
void generate(int n, string current) {
    if (n == 0) {
        if (isPalindrome(current)) {
            printString(current);
        }
        return;
    }
    generate(n - 1, current + "0");
    generate(n - 1, current + "1");
}

int main() {
    int n;
    cin >> n;
    generate(n, "");

    return 0;
}
