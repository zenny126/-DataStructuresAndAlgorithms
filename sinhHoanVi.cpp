#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string numbers = "987654321";
        sort(numbers.begin(), numbers.begin() + N);

        do {
            string str=numbers.substr(9-N, N);
            cout << str << " ";
        } while (next_permutation(numbers.begin(), numbers.begin() + N));

        cout << endl;
    }

    return 0;
}
