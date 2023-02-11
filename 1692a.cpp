#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        cin>>a>>b>>c>>d;
        if (a<b&&a<c&&a<d)
        {
            /* code */
            cout<<"3"<<endl;
        }
        else if ((a<b&&a<c)||(a<b&&a<d)||(a<c&&a<d))
        {
            /* code */
            cout<<"2"<<endl;
        }
        else if ((a<b)||(a<c)||(a<d))
        {
            /* code */
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
}