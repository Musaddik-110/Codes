
#include<stdio.h>
int main ()
{
    int temp[5],a1[5],i,a2[5];
    for(i=0;i<5;i++)

        scanf("%d",&a1[i]);

    for(i=0;i<5;i++)

     {

    if(a1[i]<0)

        {
            printf("%d\t",a1[i]);

        }
     }
    return 0;
}
