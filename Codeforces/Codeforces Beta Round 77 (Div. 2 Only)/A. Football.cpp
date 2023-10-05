#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int a=0;
    int b=0;
    bool ban=0;
    for (int i= 0; i <s.length(); i++){
            if(s[i]=='0'){
                a++;
                b=0;

            }
            else{
                b++;
                a=0;
            }

            if(a==7 || b==7){
            ban=1;
            }


    }
    if(ban==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
