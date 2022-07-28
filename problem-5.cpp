#include<bits/stdc++.h>
using namespace std;
void odd(int);
int main()
{
    odd(10);
}
void odd(int x)
{
    for(int i=1;i<=x;i++)
    {
        cout<<i*2-1<<endl;
    }
}