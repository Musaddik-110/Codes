
#include<stdio.h>
int main ()
{
    int i,j,temp,ara1[5],ara2[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&ara1[i]);
    }
    for(j=5;j<0;j--)
{
    temp=ara1[i];
ara1[i]=ara1[j];
temp=ara1[j];
}
for(i=0;i<5;i++)
{

printf("%d\n",ara1[j]);

}
}
