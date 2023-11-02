#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,s;
        cin>>a>>b>>c;
        s=a+b;

        if(s==c)
        {
            cout<<"+"<<endl;
        }
        else
        {
            cout<<"-"<<endl;
        }
    }
}
