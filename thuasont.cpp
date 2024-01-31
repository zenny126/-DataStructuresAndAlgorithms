#include <iostream>
#include <cmath>

using namespace std;

void prime_factors(int n) {
    for (int i = 2; i <= sqrt(n); ++i) {
        int count = 0;
        while (n % i == 0) {
            ++count;
            n /= i;
        }
        if (count > 0) {
            cout << i << "(" << count << ") ";
        }
    }
    if (n > 1) {
        cout << n << "(1) ";
    }
    cout << endl;
}

int main() {
    int num_tests;
    cin >> num_tests;

    for (int i = 0; i < num_tests; ++i) {
        int n;
        cin >> n;
        
        prime_factors(n);
    }

    return 0;
}
