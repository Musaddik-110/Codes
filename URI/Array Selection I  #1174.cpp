#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[100];
    int i;

freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

    for(i=0;i<100;i++)
        cin>>a[i];
       for(i=0;i<100;i++)
        {
            if(a[i]<=10)

        printf("A[%d] = %.1lf\n",i,a[i]);



        }
}
