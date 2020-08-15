#include<stdio.h>

int main()
{
    int i,j,a=7,b;

    for(i=1;i<=9;i+=2)

        {

             for(j=a,b=1;b<=3;j--,b++)
            printf("I=%d j=%d\n",i,j);
             a=a+2;
        }

}
