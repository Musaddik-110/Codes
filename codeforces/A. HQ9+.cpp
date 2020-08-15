
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string w ="HQ9+";
    int a=0 ,b=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
      if(w[a]==s[i])
      {
          a++;
          b++;
      }
    }
    if(b>=1)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
}
