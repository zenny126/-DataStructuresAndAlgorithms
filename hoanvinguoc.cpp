#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Hàm để liệt kê tất cả các hoán vị của 1, 2, .., N theo thứ tự ngược
void permuteReverse(int n) {
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        nums[i] = i + 1;
    }

    // In hoán vị ngược
    do {
        for (int i = n - 1; i >= 0; --i) {
            cout << nums[i];
        }
        cout << endl;
    } while (prev_permutation(nums.begin(), nums.end()));
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;

        // Liệt kê hoán vị ngược cho mỗi test case
        permuteReverse(N);
    }

    return 0;
}
