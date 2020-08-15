#include<bits/stdc++.h>
using namespace std;

class pal
{
public:
    int i ;
    pali(int n)
    {
        cin>> n;
    }

};
class base: public pal
{
public:

    palin(int n , int orginal)

    {
          int rev=0, rem =0, orginal;
       pali(int n);
       orginal=n;
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }

            void display();
    }
};
  void display(int n, int orginal)
  {    if(n==orginal)
      cout<<"palindrome"<<endl;
      else
        cout<<"not palindrome"<<endl;
  }

  int main()
  {
      int n;
      pal ob;
      ob.pali();
      pal::base ob1;
      ob1.palin();
      return 0;
  }

