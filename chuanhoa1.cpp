#include <iostream>
#include <cctype>
#include <sstream>

using namespace std;

string standardizeName(const string& name) {
    istringstream iss(name);
    ostringstream oss;
    string word;

    while (iss >> word) {
        if (word.empty()) continue;

        if (isalpha(word[0])) {
            // Chữ cái đầu mỗi từ viết hoa
            word[0] = toupper(word[0]);
            // Các chữ cái sau viết thường
            for (int i = 1; i < word.length(); ++i) {
                word[i] = tolower(word[i]);
            }
        }

        oss << word << " ";
    }

    string result = oss.str();
    // Xóa khoảng trắng cuối cùng (nếu có)
    if (!result.empty() && result[result.length() - 1] == ' ') {
        result.pop_back();
    }

    return result;
}

int main() {
    int numNames;
    cout << "Enter the number of names: ";
    cin >> numNames;
    cin.ignore(); // Đọc dòng mới sau khi nhập số lượng

    for (int i = 0; i < numNames; ++i) {
        string name;
        cout << "Enter a name: ";
        getline(cin, name);

        string standardizedName = standardizeName(name);
        cout << standardizedName << endl;
    }

    return 0;
}
