#include<stdio.h>
int main ()
{
    int a1[5],i,max,min;
    for(i=0;i<5;i++)
    scanf("%d",&a1[i]);
    max=a1[0];
    min=a1[0];
    for(i=0;i<5;i++)
    {
        if(a1[i]>max)
          {
              max=a1[i];
          }



        if(a1[i]<min)
           {
               min=a1[i];
           }

    }

printf("max = %d",max);

  printf("min = %d",min);


}
