
#include<stdio.h>
int main ()
{
    int mess[80],i;
    printf("write a message in 80 letters");
    for(i=0;i<80;i++)
 {

        mess[i]=getche();
    if(mess[i]=='\r')
        break;
}
    printf("\n");
    for(i=0;mess[i]!='\r';i++)
        printf("%c",mess[i]+2);
}
