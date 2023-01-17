#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    for (int i = 0; i < a.length(); i++)
    {
        /* code */
        if (a[i]==b[i])
        {
            /* code */
            a[i]='0';
        }
        else if (a[i]!=b[i])
        {
            /* code */
            a[i]='1';
        }
    }
    cout<<a;
}