#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    stack<string> st;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (s[1] == 'O')
        {
            if (!st.empty())
                st.pop();
        }
        else if (s[1] == 'U')
        {
            string k = "";
            for (int i = 5; i < s.size(); i++)
            {
                k += s[i];
            }
            st.push(k);
        }
        else
        {
            if (st.empty())
                cout << "NONE";
            else
                cout << st.top();
            cout << endl;
        }
    }
}
