#include<stdio.h>
void swap(int *x,int*y);
int main()
{
    int i,j;
    scanf("%d%d",&i,&j);
    printf("i and j before swapping %d %d\n\n",i,j);
    swap(&i,&j);
    printf("iand j after swapping %d %d\n\n",i,j);
    return 0;

}
void swap(int *x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
