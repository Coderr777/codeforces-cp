#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s,c;
    cin>>s>>c;
    reverse(c.begin(), c.end());
    if (s==c)
    {
        /* code */
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
}