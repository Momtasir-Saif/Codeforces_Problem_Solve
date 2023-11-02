#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    long long n;
    cin>>n;

    while(n--)
    {
        long long x,y,z,p,s;
        cin>>x>>y>>z>>p;

        s=x+y+z+p;

        if(s%3==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
