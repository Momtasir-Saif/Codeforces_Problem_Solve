#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    int count=0,n;
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
    for(int i=0;i<3;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
    }
    cout<<count;
}
