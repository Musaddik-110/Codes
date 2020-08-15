#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d",&a);
    if(a%2==0)
    {

    b=a+12;

    for(i=a;i<=b;i++)
        if(i%2!=0)
        printf("%d\n",i);
    }
    else if(a%2!=0)
    {
         b=a+11;

    for(i=a;i<=b;i++)
        if(i%2!=0)
        printf("%d\n",i);
    }

}
