#include<stdio.h>

double cube(double num);
int main()

{
    double c,num;
    scanf("%lf",&num);
    c=cube(num);
    printf("%lf\n",c);
    return 0;
}

double cube(double num)
{

    return (num*num*num);
}
