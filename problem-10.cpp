#include <bits./stdc++.h>
using namespace std;
void factors(int);
int main()
{
    factors(36);
}
void factors(int x)
{

    int i = 2;
    while (x)
    {
        if (x % i == 0)
        {
            x = x / i;
            cout<<i<<endl;
        }
        else
        i++;
    }
}