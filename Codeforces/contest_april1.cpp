#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    int n;
    cin >> n;

    if (n <= 2) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<int> perm(n);
    int odd = 1, even = 2;
    for (int i = 0; i < n; i++) {
        if (even <= n) {
            perm[i] = even;
            even += 2;
        } else {
            perm[i] = odd;
            odd += 2;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << perm[i] << " ";
    }
    cout << endl;

}



