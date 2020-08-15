
#include<stdio.h>

int main()
{
    float a,b,c,d,x,y;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    x=(2*a+3*b+4*c+1*d)/10;
    printf("Media: %.1f\n",x);
    if(x>7)
    printf("Aluno aprovado.\n");
    if(x<5)
        printf("Aluno reprovado.\n");
    if(5<=x&&x<=6.9)
      {
           printf("Aluno em exame.\n");
           scanf("%f",&y);
           printf("Nota do exame: %.1f\n",y);
           x=(x+y)/2;
           printf("Aluno aprovado.\n");
           printf("Media final: %.1f\n",x);

      }

}
