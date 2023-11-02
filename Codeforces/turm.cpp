#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin >> t;
     int a,b,c=0,d=0,e;
    for(int i=0;i<t;i++)
    {

        cin>>a>>b;
        c=(a+d)-b;

        if(c<0)
        {
            d=0;
        }
        else
        {
              d=c;
        }




    }
    cout<<c;

}
