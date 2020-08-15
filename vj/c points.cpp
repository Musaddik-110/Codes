#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,  a,      countt=0;
    cin >> m>>n;
    for(int i=0;i<m*2;i++)
    {

    cin>>a;
    if(1<=a||n>=a)
    {
        countt++;
    }

    }
     for(int i=0;i<m*2;i++)
     {
         if(i==a)
         {
             continue;
         }
         cout<<countt<<endl<<i<<endl;
     }

}
