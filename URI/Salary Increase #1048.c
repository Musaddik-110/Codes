
#include<stdio.h>
int main()
{
    float salary1,earned,salary2 ;
    scanf("%f",&salary1);

    if(0<=salary1&&salary1<=400.00)
    {
        salary2=salary1+salary1*.15;
        earned=salary2-salary1;
        printf("Novo salario: %.2f\n",salary2);
        printf("Reajuste ganho: %.2f\n",earned);
        printf("Em percentual: 15 %%\n");
    }

      else if(400.01<=salary1&&salary1<=800)
    {
        salary2=salary1+salary1*.12;
        earned=salary2-salary1;
        printf("Novo salario: %.2f\n",salary2);
        printf("Reajuste ganho: %.2f\n",earned);
        printf("Em percentual: 12 %%\n");
    }

     else if(800.01<=salary1&&salary1<=1200)
    {
        salary2=salary1+salary1*.10;
        earned=salary2-salary1;
        printf("Novo salario: %.2f\n",salary2);
        printf("Reajuste ganho: %.2f\n",earned);
        printf("Em percentual: 10 %%\n");
    }

     else if(1200.01<=salary1&&salary1<=2000)
    {
        salary2=salary1+salary1*.07;
        earned=salary2-salary1;
        printf("Novo salario: %.2f\n",salary2);
        printf("Reajuste ganho: %.2f\n",earned);
        printf("Em percentual: 7 %%\n");
    }

     else if(salary1>2000)
    {
        salary2=salary1+salary1*.04;
        earned=salary2-salary1;
        printf("Novo salario: %.2f\n",salary2);
        printf("Reajuste ganho: %.2f\n",earned);
        printf("Em percentual: 4 %%\n");
    }
}
