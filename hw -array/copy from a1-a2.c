
#include<stdio.h>
int main ()
{
    int a1[10],a2[10],i;

    for (i=1;i<=10;i++)
        a1[i-1]=i;

          for (i=1;i<10;i++)
            a2[i]=a1[i];

       for (i=1;i<11;i++)
        printf("%d\n",a2[i]);

       return 0;
}
