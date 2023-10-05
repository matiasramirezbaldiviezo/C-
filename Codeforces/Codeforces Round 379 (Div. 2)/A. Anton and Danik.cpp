#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int a=0;
    int d=0;
        string s;
        cin>>s;

        for(int i=0 ; i<s.length();i++){
            if(s[i]=='A'){
                a++;
            }
            else{
                d++;
            }
        }

    if(a>d){
        cout<<"Anton"<<endl;
    }
    else if(d>a){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }

    return 0;
}
