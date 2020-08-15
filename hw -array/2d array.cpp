#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],i,j,x=3,y=3;

   // cin>>x>>y;
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
        cin>>a[i][j]>>b[i][j];
        for(i=0;i<x;i++)
    cout<<a[i][j]<<b[i][j]<<' '<<endl;
}
