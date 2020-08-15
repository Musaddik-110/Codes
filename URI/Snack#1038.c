
#include<stdio.h>
int main()
{
    float X,Y;
    scanf("%f",&X);
    if(X==1)
    {
        scanf("%f",&Y);
        Y=Y*4.00;
        printf("Total: R$ %.2f\n",Y);
    }
    if(X==2)
    {
        scanf("%f",&Y);
        Y=Y*4.50;
        printf("Total: R$ %.2f\n",Y);
    }
    if(X==3)
    {
        scanf("%f",&Y);
        Y=Y*5.00;
        printf("Total: R$ %.2f\n",Y);
    }
    if(X==4)
    {
        scanf("%f",&Y);
        Y=Y*2.00;
        printf("Total: R$ %.2f\n",Y);
    }
    if(X==5)
    {
        scanf("%f",&Y);
        Y=Y*1.50;
        printf("Total: R$ %.2f\n",Y);
    }
}
