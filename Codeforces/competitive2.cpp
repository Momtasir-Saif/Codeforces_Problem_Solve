#include<bits/stdc++.h>
using namespace std;
int main() {

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, even = 0, odd = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {

            cin >> a[i];

            if(a[i] % 2 == 0)
            {
                even=even+a[i];
            }

            else
            {
                odd=odd+a[i];
            }

        }
        if(even == 0 || odd == 0 || even >odd)
        {
            cout << "YES"<<endl;
        }

        else
        {
             cout << "NO"<<endl;
        }

    }

}
