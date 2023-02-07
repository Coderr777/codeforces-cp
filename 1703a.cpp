#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        string s;
        cin>>s;
        if(s=="YES"||s=="YEs"||s=="YeS"||s=="yES"||s=="Yes"||s=="yEs"||s=="yeS"||s=="yes")
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
}