#include <bits/stdc++.h>
using namespace std;
int main()
 {
     ios_base :: sync_with_stdio(false);
     cin.tie(NULL),cout.tie(NULL);

     int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
     int i, j;


    for(i=0; i<3; i++) {
        for(j=0; j<4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

 }




