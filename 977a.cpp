#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    while (t--)
    {
        /* code */
        if(n%10==0)
        {
            n=n/10;
        }
        else
        {
            n--;
        }
    }
    cout<<n;
}