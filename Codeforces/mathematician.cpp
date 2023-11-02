#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    string x,y;
    cin>>x>>y;

    for(int i=0;i<x.size();i++)
    {
        if(x[i]==y[i])
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
    }

}
