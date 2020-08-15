#include<stdio.h>
int main()
{
    int q,n,k,sum,p;

while(scanf("%d%d",&n,&k)!=EOF)
{
    if(k>1)
{


    p=n/k;
    if(p>=1)
    {
        sum=n+p;

    q=p/k;
    sum=n+p+q;
    }printf("%d\n",sum);

}
}
}
