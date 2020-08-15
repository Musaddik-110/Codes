#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>> n;
    int a[n],minn=a[0],b[n];
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
        if(minn<a[i])
        b[i]=a[i];
        }
          for(int i=0;i<n;i++)
          cout<<endl<< b[i]<<endl;




}

