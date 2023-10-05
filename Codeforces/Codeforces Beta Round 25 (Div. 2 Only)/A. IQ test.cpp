#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x ;
    cin>>x;
    int impar= 0 ;
    int par=0;
    vector <int> v(x);

    for(int i = 0 ; i<x ; i++){
           cin>>v[i];
         }
    for(int i = 0 ; i<3 ; i++){
           if(v[i]%2==0){
            par++;
           }
           else{
            impar++;
           }
         }
    if(par>impar){
            for(int i = 0 ; i<x ; i++){
            if(v[i]%2!=0){
            cout<<i+1<<endl;
            }

    }
    }
    else{
        for(int i = 0 ; i<x ; i++){
            if(v[i]%2==0){
            cout<<i+1<<endl;
            }
        }
    }

    return 0;
}
