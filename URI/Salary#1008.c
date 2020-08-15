
#include<stdio.h>
int main()
{
    int num,hour;
    float recive;
    scanf("%d %d",&num,&hour);
    scanf("%f",&recive);
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",recive*hour);
    return 0;

}
