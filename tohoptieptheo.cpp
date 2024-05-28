#include <iostream>
#define MAX 100
int X[MAX], n, k, dem = 0;
bool OK = true;
using namespace std;
void Init()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++){

    }
        
}
void Result()
{

    for (int i = 1; i <= k; i++)
    {
        cout << X[i] << " ";
    }
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
    int t;
    cin >> t;
    while (t--)
    {
        Init();
        Next_Combination();
        Result();
    }
}