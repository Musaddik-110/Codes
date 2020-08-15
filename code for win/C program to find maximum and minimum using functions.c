#include<stdio.h>
int max(int a,int b);

int main()
{
    int result,a,b;
    scanf("%d%d",&a,&b);
    result=max(a,b);
    printf("%d max",result);
    return 0;

}
int max(int a,int b)
{

    return a>b?a:b;
}
