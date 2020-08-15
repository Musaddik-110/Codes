#include<iostream>
using namespace std;
int main()
{
    double a,sum=0,i=0,x;
c:    while(i!=2)

    {   cin>>a;
    if(a<0||a>10)
            {cout<<"nota invalida"<<endl;}


       else if(a>=0&&a<=10)
            {sum=sum+a;
            i++;


        }

    }
    cout<<"media = "<<sum/2<<endl;
    sum=0;

    while(1)
   d: {    cout<<"novo calculo (1-sim 2-nao)"<<endl;
         cin>>x;
         if(x==2)
         break;
         else if(x!=1&&x!=2)
            {continue;
         goto d;}

else if(x==1)

            goto c;

        }

        }








