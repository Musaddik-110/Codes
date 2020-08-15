
#include<stdio.h>
int main()
{
    int i,t,c=0,a,b;
    printf("test\n");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        c=a+b;
    }
   printf("case %d : %d\n",i,c);
}
