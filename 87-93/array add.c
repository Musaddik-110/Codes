
#include<stdio.h>
int main()
{
    int num[5],i,total=0;
    printf("num\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
         total=total+num[i];
    }

    printf("numbers are-\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",num[i]);
    }
 printf("total = %d",total);
return 0;
}
