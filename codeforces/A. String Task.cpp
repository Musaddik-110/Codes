
#include<bits/stdc++.h>
using namespace std;
class str
{
public :
    string a;
    cin>> a;

};

class str1:public str

{
    public :
    int i;
    char s[101];
    void display()
    {


    for (i=0;i<strlen(a);i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            continue;
        else

            cout<<"."<<s[i];

    }
    }
};


int main()
{
    str1 ob;
    ob.display();
    return 0;
}
