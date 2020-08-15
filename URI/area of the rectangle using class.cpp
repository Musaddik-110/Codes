#include<iostream>
using namespace std;

 class rect
 {  public:
     int a,b;
     int area()
     {
         return a*b;
     }
 };

int main()
{  //int a,b;
    rect ob;
     cin>> ob.a>>ob.b;
   // rect.ob;
   cout<<ob.area()<<endl;
}
