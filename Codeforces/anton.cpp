#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    long x;
    cin>>x;
        string n;
        int p=0,q=0;
        cin>>n;


        for(int i=0;i<x;i++)
        {
            if(n[i]=='A')
            {
                p++;
            }
            else if(n[i]=='D')
            {
                q++;
            }

        }
        if(p>q)
        {
            cout<<"Anton";
        }
        else if(q>p)
        {
            cout<<"Danik";
        }
        else if(q==p)
        {
            cout<<"Friendship";
        }



}
