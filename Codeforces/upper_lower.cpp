#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    string s;
    int upp=0,low=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
        {
            upp++;
        }
        else
        {
            low++;
        }
    }
    if(upp>low)
    {
    for(int i=0;i<s.length();i++)
    {
        s[i]=toupper(s[i]);

    }
    cout<<s<<endl;
    }
    else{

     for(int i=0;i<s.length();i++)
    {
        s[i]=tolower(s[i]);

    }
    cout<<s;
    }
}
