
#include <iostream>
//#include<iomanip>
using namespace std;
int main()
{
    float i,a,b,x,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        x=a/b;
        if (b==0)
            {cout<<"divisao impossivel"<<endl;}
        else
            cout << fixed << setprecision(1) << x << endl;



}
}
