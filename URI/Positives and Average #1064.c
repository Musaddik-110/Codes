#include<stdio.h>
int main()
{
    double a,sum=0;
  int i,c=0;
  for(i=1;i<=6;i++)

    {
        scanf("%lf",&a);

    if(a>0)

    {
        sum=sum+a;
         c=c+1;


        }

    }

    printf("%d valores positivos\n",c);

    printf("%.1lf\n",sum/c);
}























