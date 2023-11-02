
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int a,h,s,p=0,q=0;
    cin>>a>>h;


    for(int i=0;i<a;i++)
    {
        cin>>s;

    if(s>h)
    {
        p+=2;
    }
    else if(h>=s)
    {
        q++;
    }

    }
    cout<<p+q;

}
