
#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&i,&j,&k);
    printf("a=%d\n\nb=%d",(j*c-k*b)/(a*j-i*b),(a*k-i*c)/(a*j-i*b));
}
