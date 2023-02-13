#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        cin>>s;
        int c=(int) s[0]+s[1]+s[2];
        int d=(int) s[3]+s[4]+s[5];
        if (c==d)
        {
            /* code */
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}