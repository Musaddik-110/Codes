
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m,f=0;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
             for(int j=1;j<=m;j++)
                 cout<<"#";

        }

        else if(f==0)
        {
            for(int j=1;j<=m;j++)
                {
                    if(j!=m)
                cout<<".";
            else
                cout<<"#";
                }
               f=1;
                //cout<<endl;
        }
         else if(f==1)
        {
            for(int j=1;j<=m;j++)
                {
                    if(j!=1)
                cout<<".";
            else
                cout<<"#";
                }
                //cout<<endl;
                   f=0;
        }
            cout<<endl;

    }



}
