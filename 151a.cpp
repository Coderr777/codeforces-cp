#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a=k*l;
    int b=a/nl;
    int m=c*d;
    int mm=p/np;
    int mmm=min(a,min(b,min(m,mm)));
    cout<<(mmm/n);
}