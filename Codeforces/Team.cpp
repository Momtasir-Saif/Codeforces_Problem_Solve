#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);


    int x, y,z,p,count=0;
    cin>>x;
    for(int i=0;i<x;i++)
    {

        cin>>y>>z>>p;

        if(z+y+p >=2)
        {
            count++;
        }
    }
cout<<count<<endl;

}
