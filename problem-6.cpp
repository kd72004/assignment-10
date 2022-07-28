#include<bits/stdc++.h>
using namespace std;
int factorial(int );
int main()
{
    cout<<factorial(5)<<endl;
}
int factorial(int x)
{
    int f=1;
    while(x)
    {
        f=f*x;
        x--;
    }
    return f;
}