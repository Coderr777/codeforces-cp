#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int flag=0;
    string s;
    cin>>t;
    cin>>s;
    for (int i = 0; i < t; i++)
    {
        /* code */
        if (s[i]==s[i+1])
        {
            /* code */
            flag=flag+1;
        }
    }
    cout<<flag;    
}