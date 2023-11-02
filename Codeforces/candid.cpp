#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    int t;
    cin>>t;
    while(t--);
    {
    int n,even=0,odd=0,x,y;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];

       if(a[i]%2==0)
       {
          even=a[i]+even;
          x=even+even;
       }

       else
       {
           odd=a[i]+odd;
           y=odd+odd;
       }
       if(x>y)
       {
           cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
}
}
