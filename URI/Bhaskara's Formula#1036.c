
#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,d;
    scanf("%f%f%f",&A,&B,&C);
    d=(B*B)-(4*A*C);
    if(d>0&&A!=0)
    {

    printf("R1 = %.5f\n",(-B+sqrt(B*B-4*A*C))/(2*A));
    printf("R2 = %.5f\n",(-B-sqrt(B*B-4*A*C))/(2*A));
    }
    if(d<0||A==0&&sqrt(d))
    printf("Impossivel calcular\n");
}
