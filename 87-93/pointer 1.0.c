
#include<stdio.h>
int main()


{   int i,*p;
    i=10;
    p=&i;
    printf("value=%d\n",i);

    printf("value=%d\n",*p);
      printf("address=%p\n",p);
        printf("address=%p\n",&i);
        return 0;

}
