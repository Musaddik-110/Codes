
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,age=0,a,x;
    int i;

    while(1)
    {   cin>>n;
        if(n<0)
            break;
        else
            {age=age+n;
            a++;}

    }
    x=age/a;
    printf("%.2f",x);



}

