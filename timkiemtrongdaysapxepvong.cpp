#include <iostream>
#include <algorithm>
using namespace std;
void run(int n, int x)
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == x)
        {
            cout << i + 1 << endl;
           
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int x;
        cin >> n;
        cin>> x;
        run(n, x);
    }
}