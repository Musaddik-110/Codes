#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[10],x;
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
   // for(i=0;i<10;i++)
        cin>>x;
        printf("N[0] = %d\n",x);
        for(i=1;i<10;i++)
        {x=x*2;
            a[i]=x;}
         for(i=1;i<10;i++)
            printf("N[%d] = %d\n",i,a[i]);
}
