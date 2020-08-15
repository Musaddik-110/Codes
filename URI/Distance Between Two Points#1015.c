
#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,i,j;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    i=(x2-x1)*(x2-x1);
    j=(y2-y1)*(y2-y1);
    printf("%.4f\n",sqrt(i+j));
    return 0;

}
