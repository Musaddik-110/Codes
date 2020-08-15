#include<iostream>
using namespace std;

int div(int x)
{
    int i;
    while(i!=x)
    {for(i=1;i<=x;i++)
        if(x%i==0)
        return i;}
}


int main()
{
    int n,y;
    cin>>n;
    y=div(n);
    cout<<y<<endl;
}
