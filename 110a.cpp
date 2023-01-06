#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long int x;
    int flag=0;
    cin>>x;
    while (x!=0)
    {
        /* code */
        
        if(x%10==4 || x%10==7)
        {
            flag++;
            x=x/10;
        }
        else{
            x=x/10;
        }
    }
    if (flag == 4 || flag == 7)
    {
        /* code */
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
}