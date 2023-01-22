#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,m;
    m=0;
    int n;
    cin>>t;
    cin>>n;
    for (i = 1; i <= t; i++)
    {
        /* code */
        m=m+5*i;
        if (n+m>240)
        {
            /* code */
            break;
        }
    }
    cout<<i-1;
}