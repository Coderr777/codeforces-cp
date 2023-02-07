#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int k,w;
    cin>>k>>w;
    const string s[7]={"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    if (k>w)
    {
        /* code */
        cout<<s[k];
    }
    else if (w>k)
    {
        /* code */
        cout<<s[w];
    }
    else if (w==k)
    {
        /* code */
        cout<<s[k];
    }
}