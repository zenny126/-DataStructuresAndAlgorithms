#include <iostream>
#define MAX 100
int X[MAX], n, k, dem = 0, b[100];
int count;
bool OK = true;
using namespace std;
bool Init()
{
    dem = 0;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin>>X[i];
        b[X[i]]=1;
        if (X[i] == n - k + i)
            count++;
    }
    if (count == k)
        return true;
    return false;
}
void Result()
{

    for (int i = 1; i <= k; i++)
    {
        if (b[X[i] == 0])
            count++;
    }
    cout<<count<<endl;
}
void Next_Combination()
{
    int i = k;
    while (i > 0 && X[i] == n - k + i)
        i--;
    if (i > 0)
    {
        X[i] = X[i] + 1;
        for (int j = i + 1; j <= k; j++)
            X[j] = X[i] + j - i;
    }
    else
        OK = false;
}
int main(void)
{
    if (Init())
        cout << k << endl;
    else
        Next_Combination();
        Result();
}