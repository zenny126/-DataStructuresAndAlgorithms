#include <iostream>
#include <algorithm>
using namespace std;
bool checkString(string str){
    for(int i=0;i<str.length()-1;i++){
        int x=str[i]-str[i+1];
        if(x==1) return 0;
        if(x==-1) return 0;
    }
    return 1;
}
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string numbers = "123456789";
        sort(numbers.begin(), numbers.begin() + N);

        do {
            if(checkString(numbers.substr(0, N)))
            cout << numbers.substr(0, N) <<endl;
        } while (next_permutation(numbers.begin(), numbers.begin() + N));

        cout << endl;
    }

    return 0;
}
