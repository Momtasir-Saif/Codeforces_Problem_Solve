#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int a,b,c=0;
    cin>>a>>b;

    for(int i=0;i<b;i++)
    {
       if(a%10==0)
       {
           a=a/10;
       }
       else{
        a--;
       }
    }
    cout<<a;

}
