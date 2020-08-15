
#include <stdio.h>

int main()
{
    int a,b,x=0;
    scanf("%d%d",&a,&b);


    if(a==b)

            {
                printf("O JOGO DUROU 24 HORA(S)\n");

                }

  else  if(a>12)
    {
        a=24-a;
        x=a+b;
        printf("O JOGO DUROU %d HORA(S)\n",x);
    }

    else if(a<12)
    {
        a=12-a;
        b=b-12;
        x=a+b;
         printf("O JOGO DUROU %d HORA(S)\n",x);
    }





}





