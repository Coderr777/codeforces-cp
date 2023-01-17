#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100];
    double b=0.0;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
        b=b+a[i];
    }
    b=b/n;
    cout<<fixed<<setprecision(12)<<b;
}