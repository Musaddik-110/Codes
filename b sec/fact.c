#include<stdio.h>
int main()
{
    int i,j,n=1;
    printf("number\n");
    scanf("%d",&i);
    for(j=i;j>=1;j--)
        n=n*j;
    printf("%d\n",n);
}
