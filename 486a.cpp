#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    long long t,sum;
    cin>>t;
    sum=0;
    if (t%2==0)
    {
        sum=t/2;
    }
    else
    {
        sum=(((t+1)/2)*(-1));
    }
    cout<<sum;
}