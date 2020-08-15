#include<bits/stdc++.h>
using namespace std;
int main()
{   freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
    int a[20],b[20],i,j=0;
    for(i=0;i<20;i++)
        cin>>a[i];
 for(i=19;i>=0;i--)
        b[i]=a[i];

           for(i=19,j=0;j<20,i>=0;i--,j++)
            printf("N[%d] = %d\n",j,b[i]);

}
