#include<bits/stdc++.h>
using namespace std;
float simple_interest(float,float,float);
int main()
{
    cout<<simple_interest(4500,0.095,6)<<endl;
}

float simple_interest(float p,float r,float t)
{
    return ((p*r*t)/100);
}