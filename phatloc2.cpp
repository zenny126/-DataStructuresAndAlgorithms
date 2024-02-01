#include <iostream>
#include <vector>
#include <string>
using namespace std;
int count(int n){
    int count=0;
    while (n>0)
    {
        int a=1;
        for(int i=0;i<n;i++){
            a=a*2;
        }
        count=count+a;
        n--;
    }
    
    return count;
}
void generate(int n, string current)
{
    if (n == 0)
    {

        cout << current << " ";

        return;
    }
    generate(n - 1, current + "6");
    generate(n - 1, current + "8");
}

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int n;
        cin >> n;
        cout<<count(n)<<endl;
        for (int i=1;i<=n;i++){
            generate(i,"");
        }
        cout<<endl;
    }

    return 0;
}
