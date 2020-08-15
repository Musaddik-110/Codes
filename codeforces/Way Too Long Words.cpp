#include<bits/stdc++.h>
using namespace std;

class str
{
public:
  string a;

  /* int st(int n)
    {
          }*/
    void display()
    {   int p;
        if(a.length()>10)
        {

        p=a.length();
        cout<<a[0]<<p-2<<a[a.length()-1]<<endl;
        }
        else
            cout<<a;
    }
};

int main()
{  int n;
  string a;
    cin>>n;

        while(n--)

      {
          cin>>a;
      }
    str ob;
   // ob.st(n);
    ob.display();
}
