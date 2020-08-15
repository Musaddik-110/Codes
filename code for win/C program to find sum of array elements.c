
#include<stdio.h>
int main ()
{
    int i,a1[5],sum=0;
    for(i=0;i<5;i++)
       {

     scanf("%d",&a1[i]);
    sum=sum+a1[i];
       }
   // for(i=0;i<5;i++)
    printf("\n%d\n",sum);
}
