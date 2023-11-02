#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    int len, i, count = 0;
    char *ptr;


    cin.getline(str, 100);

    len = strlen(str);

    for(i=0; i<len; i++) {
        ptr = strchr("AEIOUaeiou", str[i]);
        if(ptr != NULL) {
            count++;
        }
    }

    cout << "The number of vowels : " << count << endl;

    return 0;
}

