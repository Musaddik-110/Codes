#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s1=0,s2=0,s3=0,a=0,b=0,c=0,n;

    cin>>n;
    for(int i=0; i<n;i++)
    {
        cin>>a>>b>>c;
        s1+=a;
        s2+=b;
        s3+=c;
    }
    if(s1==0&&s2==0&&s3==0)
        cout<<"YES"<<endl;
    else
        cout<<"No"<<endl;
}
