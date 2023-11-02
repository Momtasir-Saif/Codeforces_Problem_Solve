#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int a,b,t=0;
    cin>>a>>b;

    while(b>=a)
    {
        a=a*3;
        b=b*2;
        t++;
    }
    cout<<t;



}
