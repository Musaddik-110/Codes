
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("1st number :\n\n");
    scanf("%d",&a);
    printf("\n2nd number :\n\n");
    scanf("%d",&b);
   /* printf("\n1st number :%d\n\n",b);
     printf("\n2nd number :%d\n\n",a);
     return 0;*/

     c=a;
     a=b;
     b=c;
     printf("%d\n%d\n",a,b);

}
