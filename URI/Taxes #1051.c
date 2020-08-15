#include<stdio.h>
int main()
{
    float n,a,b,c,d;
    scanf("%f",&n);

    if(2000.01<=n&&n<=3000.00)
    {
        n-=2000;
        a=n*.08;
        printf("R$ %.2f\n",a);
    }
    else if (3000.01<=n&&n<=4500.00)
    {
        n-=2000;
        a=n*.08;
        b=3000-n;
        c=b*.18;
        printf("R$ %.2f\n",a+c);
    }

    else if (4500.01<=n)
    {
        n-=2000;
        a=n*.08;
        b=3000-n;
        c=b*.18;
        d=4000;
    }




    if(0<=n&&n<=2000)
    {
        printf("Isento\n");

    }
}
