#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string s;
        cin >> s;
        if (s.length() > 10)
        {
            cout << s[0];
            cout << s.length() - 2;
            cout << s[s.length() - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
}