#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c,t,cnt;
    cnt=0;
    cin>>t;
    while (t--)
    {
        /* code */
        cin>>a>>b>>c;
        if (((a==1)||(a==0))&&((b==1)||(b==0))&&((c==1)||(c==0)))
        {
            /* code */
            if (a==1 && b==1)
            {
                /* code */
                cnt++;
            }
            else if (a==1 && c==1)
            {
                /* code */
                cnt++;
            }
            else if (c==1 && b==1)
            {
                /* code */
                cnt++;
            }
            else if (a==1 && b==1 && c==1)
            {
                /* code */
                cnt++;
            }
            else
            {
            }
        }
    }
    cout<<cnt;
}