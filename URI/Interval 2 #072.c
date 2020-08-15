#include<stdio.h>

int main()
{
  int a=0,b=0,t,n,i;

  scanf("%d",&t);

  for(i=0;i<t;i++)
  {

   scanf("%d",&n);
    if(10<=n&&n<=20)
    a++;
  else
    b++;
  }

  printf("%d in\n",a);
   printf("%d out\n",b);
}
