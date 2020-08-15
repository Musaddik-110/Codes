
#include<bits/stdc++.h>
using namespace std;

class copy_constructor
{
    int a;
public:
    copy_constructor(int x)
    {
        cout<<"constructor called"<<endl;
        a=x;
    }
    void print()
    {
        cout<<a<<endl;
    }
};

int main()
{
   copy_constructor ob(10);
   copy_constructor ob1=ob;

    ob.print();
    ob1.print();
}
