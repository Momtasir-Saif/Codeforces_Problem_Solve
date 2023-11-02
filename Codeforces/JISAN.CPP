#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    string str;
    while(getline(cin,str)){

        int o=0,c=0,sz = str.size();

        if(str[0]==')'){
            cout<<"Invalid"<<endl;
        }
        else if(sz%2!=0){
            cout<<"Invalid"<<endl;
        }
        else{
            for(int i=0; i<sz; i++){
                if(str[i]=='('){
                    o++;
                }
                else{
                    c++;
                }
            }
            if(o==c){
                cout<<"Valid"<<endl;
            }
            else{
                cout<<"Invalid"<<endl;
            }
        }

    }




    return 0;
}

