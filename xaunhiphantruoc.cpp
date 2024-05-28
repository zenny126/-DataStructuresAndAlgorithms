#include <iostream>
#include <string>
using namespace std;

// Hàm tìm xâu nhị phân trước của một xâu nhị phân
string previousBinaryString(string X) {
    int n = X.length();
    int i = n - 1;

    // Duyệt từ phải sang trái để tìm vị trí của ký tự '1' đầu tiên
    while (i >= 0 && X[i] != '1') {
        i--;
    }

    // Nếu không tìm thấy ký tự '1' thì xâu đó là "000...0"
    if (i == -1) {
        return string(n, '1'); // Trả về xâu toàn ký tự '1'
    }

    // Đặt ký tự '1' đầu tiên thành '0'
    X[i] = '0';

    // Đặt tất cả các ký tự sau vị trí đó thành '1'
    for (int j = i + 1; j < n; j++) {
        X[j] = '1';
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

        // Tìm và in ra xâu nhị phân trước của X
        cout << previousBinaryString(X) << endl;
    }

    return 0;
}
