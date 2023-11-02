
#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define forN for(int i=0; i<n; i++)
#define forNr for(int i=n-1; i>=0; i--)
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;

        string s;
        cin >> s;

        bool k = false;
        for (int i = 0; i < n; i++) {
            if (s[i] -'0' < d) {
                s.insert(i, to_string(d));
                k = true;
                break;
            }
        }

        if (k==false) {
            s += to_string(d);
        }

        cout << s<< endl;
    }





return 0;
}
