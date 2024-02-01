#include <iostream>
#include <cmath>

using namespace std;

int countEvenDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                ++count;
            }
            if ((n / i) % 2 == 0 && i != n / i) {
                ++count;
            }
        }
    }

    return count;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;

        int result = countEvenDivisors(N);
        cout << result << endl;
    }

    return 0;
}
