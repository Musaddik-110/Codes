#include<bits/stdc++.h>
using namespace std;

int main()

{
    int m,n,p=1,q=1;
     int flag =0;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
        {
            if(p%2!=0)
        {
            for(int j=0;j<m;j++)
    {

        cout<<"#";

    }

         cout<<endl;

    }

     else
    {
        if(q%2!=0)
        {


         for(int j=1;j<=m-1;j++)
    {

        cout<<".";


        cout<<"#";
        cout<<endl;
    }
        }
        else
{

           for(int j=1;j<=m-1;j++)
    {

        cout<<"#";

        cout<<".";
        cout<<endl;

    }

    }

        q++;


}
 p++;
}
}



