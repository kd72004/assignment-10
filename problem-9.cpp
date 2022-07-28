#include<bits/stdc++.h>
using namespace std;
string number_contains(int ,int );
int main()
{
    int num,digit;
    cin>>num>>digit;
    cout<<number_contains(num,digit)<<endl;
}
string number_contains(int num,int digit)
{
    while(num)
    {
        if(digit==num%10)
        return "Yes";
        num/=10;
    }
    return "NO";
}