#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int n,temp;
    cin >> n;

    if (n <= 2) {
        cout << "NO SOLUTION" << endl;

    }
    else
    {
    vector<int> p;
    for (int i = 2; i <= n; i += 2) {
        p.push_back(i);
        //cout<<i<<" ";

    }
    for(int i=0;i<n;i++)
    {
        p[i];

    }
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<n;x++)
        {


        if(p[i]<p[i+1])
        {
            temp=p[i];
            p[i]=p[i+1];
            p[i+1]=temp;
        }
    }
    }



    for(int i=0;i<n;i++)
    {
    cout<<p[i]<<" ";
    }
    for (int i = 1; i <= n; i += 2) {
        p.push_back(i);
        cout<<i<<" ";

    }

    //for (int i = 0; i < n; i++) {
       // cout << p[i] << " ";
   // }
   // cout << endl;
    }

}

