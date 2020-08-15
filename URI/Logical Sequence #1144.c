#include<stdio.h>
int main()
{
    int i,k=0,l=0,x,p,q,m,n;

    scanf("%d",&x);


   for(i=1;i<=x;i++)
   {    p=i*i;
    q=i*i*i;
       printf("%d %d %d\n",i,p,q);

        m=p+1;
        n=q+1;
        printf("%d %d %d\n",i,m,n);

   }
}
