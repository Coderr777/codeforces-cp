// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x,flag;
//     cin>>x;
//     flag=0;
//     while (x!=0)
//     {
//         /* code */
//         if (x/100>=1)
//         {
//             /* code */
//             flag++;
//             x=x%100;
//         }
//         else if (x/20>=1)
//         {
//             /* code */
//             flag++;
//             x=x%20;
//         }
//         else if (x/10>=1)
//         {
//             /* code */
//             flag++;
//             x=x%10;
//         }
//         else if (x/5>=1)
//         {
//             /* code */
//             flag++;
//             x=x%5;
//         }
//         else if (x!=0)        
//         {
//             /* code */
//             flag++;
//             x=x-1;
//         }
//     }
//     cout<<flag;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    int a[]={100,20,10,5,1};
    cin>>n;
    for(int i=0; i<5; i++)
    {
        ans=ans+n/a[i];
        n=n%a[i];
    }
    cout<<ans<<endl;
    return 0;
}