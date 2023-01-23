#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int sum,t,a[100],max;
    max=0;
    sum=0;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for (int i = 0; i < t; i++)
    {
        /* code */
        if (a[i]<max)
        {
            /* code */
            sum=sum+max-a[i];
        }
    }
    cout<<sum;
}