#include<stdio.h>
int main()
{
    int i,a,n,x;
    scanf("%d",&a);
    while(n!=0||n>0)
    {
        scanf("%d",&n);
        if(n==0||n<0)
            scanf("%d",&n);
        else
            x=a+n+n;
        printf("%d\n",x);
    }
}
