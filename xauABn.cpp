#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generate(int n, string current) {
    if (n == 0) {
        cout<<current<<" ";
        return;
    }
    generate(n - 1, current + "A");
    generate(n - 1, current + "B");
}

int main() {
    int t;
    cin>> t;
    while(t--){
          int n;
    cin >> n;
    generate(n, "");
    cout<<endl;
    }
  

    return 0;
}
