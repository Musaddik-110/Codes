#include<bits/stdc++.h>
using namespace std;

class water
{
   public:
       int w;
      int  div(int a)
      {
          if(a%2==0&&a>2)
          {

                cout<< "YES"<<endl;
          }
          else
            cout<< "NO"<<endl;
      }


};

int main()
{  int a;
    water ob;
    cin>> a;

    ob.div(a);
return 0;
}

