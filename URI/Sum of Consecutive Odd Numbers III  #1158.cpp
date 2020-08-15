#include<iostream>
using namespace std;

int main()
{
    int t,x,y,i,j,sum=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>y;
        if(x%2==0)
        {
            x=x+1;
            //j=y;

           while(j!=y)
           {
               x+=2;
               j++;
           }
        }
        }
        cout<<x<<endl;
    }

