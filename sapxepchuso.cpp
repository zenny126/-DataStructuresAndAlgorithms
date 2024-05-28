#include<iostream>
#include <string>
#include<algorithm>
using namespace std;

void printString(const string& str) {
    char last = str[0];
    cout << last << " ";
    for (int i = 1; i < str.length(); i++) {
        if (str[i] != last) {
            last = str[i];
            cout << last << " ";
        }
    }
}

void swap(char* a, char* b) {
    char t = *a;
    *a = *b;
    *b = t;
}

int partition(string& str, int l, int h) {
    char x = str[h];
    int i = (l - 1);
    for (int j = l; j <= h - 1; j++) {
        if (str[j] <= x) {
            
            i++;
            swap(&str[i], &str[j]);
        }
    }
    swap(&str[i + 1], &str[h]);
    return (i + 1);
}

void quickSort(string& str, int l, int h) {
    if (l < h) {
        int p = partition(str, l, h);
        quickSort(str, l, p - 1);
        quickSort(str, p + 1, h);
    }
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string num, str;
        getline(cin, num);
        getline(cin, str);
        quickSort(str, 0, str.length() - 1);
        str.erase(remove(str.begin(), str.end(), ' '), str.end());

        printString(str);
        cout << endl;
    }

    return 0;
}
