#include<bits/stdc++.h>
using namespace std;

int main()
  {

      int i=0;
  char str[100];
  char c;
  while (1)
  {

      cin>>str[i];
    if(i!='\0')
    {
        c=str[i];
    if (isupper(c))
        c=tolower(c);
    if(islower(c))
        c=toupper(c);
    putchar (c);
    i++;
    }
  }
  return 0;

  }
  //str[i]!='\0'
