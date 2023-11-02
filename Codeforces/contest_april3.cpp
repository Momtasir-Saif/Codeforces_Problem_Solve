#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 2) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<int> perm(n);
    int idx = 0;
    for (int i = 2; i <= n; i += 2) {
        perm[idx++] = i;
        sort()
    }
    for (int i = 1; i <= n; i += 2) {
        perm[idx++] = i;
    }

    for (int i = 0; i < n; i++) {
        cout << perm[i] << " ";
    }
    cout << endl;

    return 0;
}




