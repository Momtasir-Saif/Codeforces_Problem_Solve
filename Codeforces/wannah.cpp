
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    int f,p,q,count=0;
    int arr[200];
    cin>>f>>p;
    for(int i=0;i<p;i++)
    {
        cin>>arr[i];
    }
    cin>>q;
    for(int i=p;i<p+q;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+(p+q));
    for(int i=0;i<p+q;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count++;
        }
    }
        if(count==f)
        {
            cout<<"I become the guy";
        }
        else{
            cout<<"Oh, my keyboard!";
        }

}
