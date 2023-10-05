
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x;
    cin>>x;
    vector <string> v;
    vector <int> q(100001, 0);
    string c;

    for (int i = 0 ; i<x ; i++){
        if(i==0){
           cin>>c;
           cout<<"OK"<<endl;
           v.push_back(c);
        }
        else {
            cin>>c;
            int n=v.size();
            bool f=0;
            for (int j = 0 ; j<n ; j++){
                if(c==v[j]){
                q[j]++;
                string cadena=c+to_string(q[j]);
                cout<<cadena<<endl;
                f=1;
                break;
                }

            }
            if(f==0){
                cout<<"OK"<<endl;;
                v.push_back(c);
            }


        }
    }

    return 0;
}
