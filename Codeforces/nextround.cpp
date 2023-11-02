#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);


    int n,k,count=0;
    cin>>n>>k;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[k-1] && arr[i]>0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
