
#include<stdio.h>
int main ()
{
    int temp[31],i,min,max,avg;
int days;
printf("how many days in the month\n");
scanf("%d",&days);
for(i=1;i<=days;i++)
{
    printf("enter noonday temperature for that day %d :",i);
    scanf("%d",&temp[i]);
}

avg=0;
for(i=1;i<=days;i++)
    avg=avg+temp[i];
printf("Average temperature : %d\n",avg/days);
min=200;
max=0;
for(i=1;i<=days;i++)
{
    if(min>temp[i])
        min=temp[i];
    if(max<temp[i])
        max=temp[i];
}
printf("minimum temperature : %d\n",min);
printf("maximum temperature : %d\n",max);
return 0;

}
