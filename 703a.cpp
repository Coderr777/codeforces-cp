#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t,m,c;
    cin>>t;
    m=0;
    c=0;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int a,b;
        cin>>a>>b;
        if (a>b)
        {
            /* code */
            m++;
        }
        else if (b>a)
        {
            /* code */
            c++;
        }
    }
    if (m>c)
    {
        /* code */
        cout<<"Mishka";
    }
    else if(c>m)
    {
        cout<<"Chris";
    }
    else if (c==m)
    {
        /* code */
        cout<<"Friendship is magic!^^";
    }
}