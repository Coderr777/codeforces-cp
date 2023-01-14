#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,d;
    a=0;
    d=0;
    cin>>t;
    string s;
    cin>>s;
    for (int i = 0; i < t; i++)
    {
        /* code */
        if (s[i]=='A')
        {
            /* code */
            a++;
        }
        else if (s[i]=='D')
        {
            /* code */
            d++;
        }
    }
    if (a>d)
    {
        /* code */
        cout<<"Anton";
    }
    else if (d>a)
    {
        /* code */
        cout<<"Danik";
    }
    else if (a==d)
    {
        /* code */
        cout<<"Friendship";
    }
}