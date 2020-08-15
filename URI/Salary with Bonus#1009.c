
#include<stdio.h>
int main()
{   char name;
    scanf("%s",&name);
    float sale,product;
    scanf("%f %f",&sale,&product);
    printf("TOTAL = R$ %.2f\n",sale+product*.15);
}
