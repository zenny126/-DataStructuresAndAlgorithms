#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isHV(string str)
{
    for (int i = 0; i < str.length() - 1; i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
                return false;
        }
    }
    return true;
}
void generate(int n, int k, string current)
{
    if (n == 0)
    {

        if (isHV(current)==1)
        {
            cout << current << " ";

            return;
        }
    }
    for (int i = k; i > 0; i--)
    {
        generate(n - 1, k, current + to_string(i));
    }
}

int main()
{
    cout<<isHV("12");
    int n;
    cin >> n;
    int k = n;

    generate(n, k, "");

    return 0;
}
