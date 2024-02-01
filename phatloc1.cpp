#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generate(int n, string current)
{
    if (n == 0)
    {

        cout << current << " ";

        return;
    }
    generate(n - 1, current + "8");
    generate(n - 1, current + "6");
}

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int n;
        cin >> n;
        while (n > 0)
        {
            generate(n, "");
            n--;
        }
        cout<<endl;
    }

    return 0;
}
