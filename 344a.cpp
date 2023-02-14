#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t,count;
    cin>>t;
    count=0;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int a,b;
        cin>>a;
        if (count==0)
        {
            /* code */
            count++;
        }
        else if (count!=0)
        {
            /* code */
            if(a==b)
            {}
            else
            {
                count++;
            }
        }
        b=a;
    }
    cout<<count;
}