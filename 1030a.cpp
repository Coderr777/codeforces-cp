#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int flag=0;
    cin>>t;
    int a[100];
    for (int i = 0; i < t; i++)
    {
        /* code */
        cin>>a[i];
        if (a[i]==1)
        {
            /* code */
            flag=1;
        }
    }
    if (flag==0)
    {
        /* code */
        cout<<"EASY";
    }
    else
    {
        cout<<"HARD";
    }
}