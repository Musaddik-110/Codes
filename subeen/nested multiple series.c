
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=20;i++)
        for(j=1;j<=10;j++)
        printf("%dx%d=%d\t",i,j,i*j);
    return 0;
}
