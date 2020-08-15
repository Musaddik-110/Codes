#include<iostream>
using namespace std;

class add
{
    public:
    int a , b;
    add(int  x,int y)
    {
        int a=x;
        int b=y;
        cout <<"numbers initialized \n";
    }
  int  addition()
    {
        return a+b;
    }
};

int main()
{    int a , b;
 cin>>ob.a>>ob.b;
    add ob(a,b);

    cout<<ob.addition()<<endl;
}
