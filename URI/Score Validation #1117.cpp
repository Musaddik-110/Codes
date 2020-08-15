#include<iostream>
using namespace std;
int main()
{
   float a,i=0,sum=0;
    while(i!=2)
    {   cin>>a;
    if(a<0||a>10)
            {cout<<"nota invalida"<<endl;}


       else if(a>=0&&a<=10)
            {sum=sum+a;
            i++;


        }

    }
    cout<<"media = "<<sum/2<<endl;

}
