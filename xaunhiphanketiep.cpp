#include <iostream>
#include <string>
using namespace std;

// Hàm tìm xâu nhị phân kế tiếp của một xâu nhị phân
string nextBinaryString(string X) {
    int n = X.length();
    int i = n - 1;

    // Duyệt từ phải sang trái để tìm vị trí của ký tự '0' đầu tiên
    while (i >= 0 && X[i] != '0') {
        i--;
    }

    // Nếu không tìm thấy ký tự '0' thì xâu đó là "111...1"
    if (i == -1) {
        return string(n, '0'); // Trả về xâu toàn ký tự '0'
    }

    // Đặt ký tự '0' đầu tiên thành '1'
    X[i] = '1';

    // Đặt tất cả các ký tự sau vị trí đó thành '0'
    for (int j = i + 1; j < n; j++) {
        X[j] = '0';
    }

    return X;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Đọc và loại bỏ ký tự xuống dòng sau dòng chứa số lượng test

    for (int t = 0; t < T; t++) {
        string X;
        getline(cin, X); // Đọc xâu nhị phân X

        // Tìm và in ra xâu nhị phân kế tiếp của X
        cout << nextBinaryString(X) << endl;
    }

    return 0;
}
