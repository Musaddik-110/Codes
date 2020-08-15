
#include<stdio.h>

int main()
{
    int t,i,a,b,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);

       {

        if(a>b)

            for(i=b+1;i<a-1;i++)
                if(i%2!=0)
                   {



                printf("%d\n",i);
                   }



          else if(a<b)

            for(i=a+1;i<b-1;i++)
                if(i%2!=0)
                {i=i+i;

                 printf("%d\n",i);}



        else if(a==b||(a-b==1)||(b-a==1))
            printf("0\n");

    }
}
}
