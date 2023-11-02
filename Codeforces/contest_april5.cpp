#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;

    if (n % 3 == 1) {
        cout << "YES" << endl;
        cout << "1 2";
        for (int i = 4; i <= n; i += 1)
        {
            cout << " " << i;
        }
        cout << endl;
        cout << "3";
        for (int i = 5; i < n; i++)
        {
            cout << " " << i;
        }
        cout << endl;
    }
    else {
        cout << "NO" << endl;
    }

}
