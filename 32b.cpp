#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s,a;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s[i]=='.')
        {
            /* code */
            cout<<'0';
        }
        else if (s[i]=='-')
        {
            /* code */
            if (s[i+1]=='-')
            {
                /* code */
                cout<<'2';
            }
            else if (s[i+1]=='.')
            {
                /* code */
                cout<<'1';
            }
            i++;
        }
    }
}