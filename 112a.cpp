#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int flag=0;
    cin>>a;
    cin>>b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    for (int i = 0; i < a.length(); i++)
    {
        /* code */
        if (a[i]>b[i])
        {
            /* code */
            flag=1;
            break;
        }
        else if (a[i]<b[i])
        {
            /* code */
            flag=-1;
            break;
        }
    }
    cout<<flag;
}