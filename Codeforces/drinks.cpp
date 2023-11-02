#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    int t;
    cin>>t;
    int arr[t];
    double s=0;
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
        s=s+arr[i];
    }
    cout<<s/t;

}
