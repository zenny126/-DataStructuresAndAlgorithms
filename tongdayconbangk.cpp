#include <iostream>
using namespace std;
bool OK = true;
int n = 5;
int X[100];
int a[100];
int k;
int count = 0;
void Init()
{
    cin >> n;
    cin >> k;
    for (int i = 1; i <= n; i++)
    {
        X[i] = 0;
        cin >> a[i];
    }
}
bool check(int a[], int n, int k)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (X[i])
            sum = sum + a[i];
    }
    if (sum == k)
        return true;
    return false;
}
void Result()
{
    if (check(a, n, k))
    {
        for (int i = 1; i <= n; i++)
        {
            if (X[i])
                cout << a[i] << " ";
        }
        cout << endl;
        count++;
    }
}
void Next_Bits_String()
{
    int i = n;
    while (i > 0 && X[i])
    {
        X[i] = 0;
        i--;
    }
    if (i > 0)
        X[i] = 1;
    else
        OK = false;
}

int main()
{
    Init();
    while (OK)
    {
        Result();
        Next_Bits_String();
    }
    cout << count;
}