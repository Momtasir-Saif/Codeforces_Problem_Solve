
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    int t,x=0;
    cin>>t;

    while(t--)
    {


       string p;
       cin>>p;
       if(p[1]=='+')
       {
           x++;
       }
       else{
        x--;
       }



    }
    cout<<x;

}
