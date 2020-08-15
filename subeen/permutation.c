
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=3;i++)

{


 {

        for(j=1;j<=i&&j!=i;j++)

{



        for(k=1;k<=j&&k!=j;k++)
            if(i!=j&&j!=k&&k!=i)
        {


        printf("%d,%d,%d\n",i,j,k);
}
}
}
}
    return 0;
}
