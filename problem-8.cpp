#include<bits/stdc++.h>
using namespace std;
int factorail (int );
int main()
{
    int n,p,r;
    cin>>n>>r;
    p=factorail(n)/factorail(n-r);
    cout<<p<<endl;
}
int factorail(int a)
{
    if(a==1)
    return 1;
    return a * factorail(a-1);
}