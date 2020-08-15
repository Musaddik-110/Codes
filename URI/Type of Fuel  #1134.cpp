#include<iostream>
using namespace std;
int main()

{
    int i=0,j=0,k=0,x,a;
    while(x!=4)
    {
        cin>>x;
        if(x==4)
            break;
            else if(x==1)
                i++;
        else if(x==2)
            j++;
        else if(x==3)
            k++;

    }

    cout<<"MUITO OBRIGADO"<<endl<<"Alcool: "<<i<<endl<<"Gasolina: "<<j<<endl<<"Diesel: "<<k<<endl;

}
