#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    int k,n,w,s=0,p,t;
    cin>>k>>n>>w;

    for(int i=1;i<=w;i++)
    {
        p=i*k;
        s=s+p;
    }
    if(n>=s)
    {
        cout<<"0";
    }
    else
    {
    t=s-n;
    cout<<t;
    }
}
