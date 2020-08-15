/*
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(0 < a < 1000000)
    { int i,j,k,l,m,n;
        i=a/100;
        printf("%d nota(s) de R$ 100,00\n",i);
        j=a%100;
        k=j/50;
        printf("%d nota(s) de R$ 50,00\n",k);
        k=j%50;
        l=k/20;
        printf("%d nota(s) de R$ 20,00\n",l);
        l=k%10;
        m=l/10;
        printf("%d nota(s) de R$ 10,00\n",m);
        m=l%5;
        n=m/5;
        printf("%d nota(s) de R$ 5,00\n",n);



    }
}
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", n/100);
    n %= 100;
    printf("%d nota(s) de R$ 50,00\n", n/50);
    n %= 50;
    printf("%d nota(s) de R$ 20,00\n", n/20);
    n %= 20;
    printf("%d nota(s) de R$ 10,00\n", n/10);
    n %= 10;
    printf("%d nota(s) de R$ 5,00\n", n/5);
    n %= 5;
    printf("%d nota(s) de R$ 2,00\n", n/2);
    n %= 2;
    printf("%d nota(s) de R$ 1,00\n", n);
    return 0;
}
