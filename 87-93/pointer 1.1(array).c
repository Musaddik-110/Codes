

#include<stdio.h>
int main()
{
    int array[]={5,8,7,4,10};
    int *p[5],i;
    for(i=0;i<5;i++)
    { printf("%d\n",array[i]);
        p[i]=&array[i];
        }
        printf("\n\n");

         for(i=0;i<5;i++)
      printf("%d\n",*p[i]);
}
