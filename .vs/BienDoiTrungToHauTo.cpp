#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Hàm kiểm tra xem một ký tự có phải là toán tử hay không
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Hàm ưu tiên của các toán tử
int precedence(char op) {
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return -1;
}

// Hàm chuyển đổi biểu thức trung tố sang hậu tố
string infixToPostfix(string exp) {
    string postfix = "";
    stack<char> s;

    for (int i = 0; i < exp.length(); i++) {
        if (isalpha(exp[i])) { // Nếu là toán hạng
            postfix += exp[i];
        } else if (exp[i] == '(') { // Nếu là dấu mở ngoặc
            s.push(exp[i]);
        } else if (exp[i] == ')') { // Nếu là dấu đóng ngoặc
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        } else { // Nếu là toán tử
            while (!s.empty() && precedence(exp[i]) <= precedence(s.top())) {
                postfix += s.top();
                s.pop();
            }
            s.push(exp[i]);
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string exp;
        getline(cin, exp);

        string postfix = infixToPostfix(exp);
        cout << postfix << endl;
    }

    return 0;
}
