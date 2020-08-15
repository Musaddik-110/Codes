
#include<stdio.h>

int main()
{
    int j;
    float i=1;
    char ch;
    do
    {    printf("1.G -> L\n2.L->G\n\n");
        scanf("%d",&j);

        printf("amount\n\n");
        scanf("%f",&i);

        if(j==1)
            printf("%f litter\n\n",i*3.7854);
        if(j==2)
            printf("%f gallon\n\n",i/3.7854);
    printf("\n'Q'to quit\n\n'enter'to proceed\n");
   ch=getche();
    }
    while(ch!='q');
    return 0;
}
