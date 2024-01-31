#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string kq = "NO";
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x == k)
            {
                kq = to_string(i);
            }
        }
        cout<<kq<<endl;
    }
}