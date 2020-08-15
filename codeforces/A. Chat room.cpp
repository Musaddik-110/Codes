
#include<bits/stdc++.h>
using namespace std;

int main()

{
    string s;
    cin >> s;
    string word="hello";
    int a=0,c=0;
    for(int i =0;i<s.length();i++)
    {
        if(s[i]==word[a])
            {a++;
            c++;}

    }

    if(c==5)
    printf("YES\n");
    else
        printf("NO\n");
}
