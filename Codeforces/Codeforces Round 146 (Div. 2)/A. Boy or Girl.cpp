#include <bits/stdc++.h>
using namespace std;

int main() {
    string s ;
    cin>>s;
    set <char> x;
    for (int i=0 ; i<s.length();i++){
            x.insert(s[i]);


    }
    if(x.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;

    }
    else{
        cout<<"IGNORE HIM!"<<endl;

    }


    return 0;
}
