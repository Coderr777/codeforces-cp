#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    int a;
    int b;
    cin>>t;
    int c[1000];
    for (int i = 0; i < t; i++)
    {
        /* code */
        cin>>a;
        cin>>b;
        if (a<b)
        {
            /* code */
            cout<<(b-a)<<endl;
        }
        else if (a%b!=0)    
        {
            cout<<(b-(a%b))<<endl;
        }
        else if (a%b==0)
        {
            cout<<(a%b)<<endl;
        }
        
    }
}