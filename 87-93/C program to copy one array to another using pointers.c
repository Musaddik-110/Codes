
#include<stdio.h>
int main()
{
    int a1[3],a2[3],i;
   // int *p[3],*q[3];
    for(i=0;i<3;i++)
   {


    scanf("%d",&a1[i]);
   }
        for(i=0;i<3;i++)
   {

    a2[i]=a1[i];
   // p[i]=a1[i];
   /*  for(i=0;i<3;i++)
    *q[i]=*p[i];
*/}
     for(i=0;i<3;i++)
          // a2[i]=q[i];
        printf("\n\na2[%d]=%d\n\n\n",i,a2[i]);
}
