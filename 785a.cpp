#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,flag;
    flag=0;
    cin>>t;
    string s;
    while (t--)
    {
        /* code */
        cin>>s;
        if (s=="Tetrahedron")
        {
            /* code */
            flag=flag+4;
        }
        else if (s=="Cube")
        {
            /* code */
            flag=flag+6;
        }
        else if (s=="Octahedron")
        {
            /* code */
            flag=flag+8;
        }
        else if (s=="Dodecahedron")
        {
            /* code */
            flag=flag+12;
        }
        else if (s=="Icosahedron")
        {
            /* code */
            flag=flag+20;
        }
    }
    cout<<flag;
}