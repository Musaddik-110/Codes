#include<stdio.h>
int main()
{
    int i=0,k=1,l=3,j,x;

    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        for(j=k;j<=l;j++)
            printf("%d ",j);


        printf("PUM\n");
          k=l+2;
        l=l+4;
    }

}
