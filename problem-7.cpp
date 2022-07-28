#include <bits/stdc++.h>
using namespace std;
int factorail(int);
int main()
{
    int c, n = 7, r = 4;
    c = factorail(n) / (factorail(r) * (factorail(n - r)));
    cout << c << endl;
}
int factorail(int n)
{
    if (n == 1)
        return 1;
    return n * factorail(n - 1);
}