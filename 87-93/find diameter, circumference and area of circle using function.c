
#include <stdio.h>
float circumference(float num);
//float area(float num);
main()
{
    float num;
    scanf("%f",&num);
    //x=area(num);
    printf("circumference %f\n",circumference(num));
      printf("area %f\n",area(num));

    return 0;
}
float circumference(float num)

{
    return circumference(2*3.14*num);

}/*
float area(float num)

{
      return (3.14*num*num);
}
