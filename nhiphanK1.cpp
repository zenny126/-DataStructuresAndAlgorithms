#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generate(int n, int k, string current) {
    if (n == 0 && k == 0) {
        cout << current << endl;
        return;
    }
    if (n > 0) {
        generate(n - 1, k, current + "0");
        if (k > 0) {
            generate(n - 1, k - 1, current + "1");
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        generate(n, k, "");
    }

    return 0;
}
