
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
   int n,a=0,b=0;
   int m[]={47,74,744,474,4,7,77,44,444,777,447,477,747,774};
    cin>> n;
    for(i=0;i<14;i++)

    {
        if(n==m[a]||n%m[i]==0)
        {
            a++;
            b++;
        }
    }
    if(b>=1)
        printf("YES\n");
    /*else if(n%4==0||n%7==0)
    {
        printf("YES\n");
    }
*/
    else
        printf("NO\n");

     //777,774,747,477,447,444,474,744




}

