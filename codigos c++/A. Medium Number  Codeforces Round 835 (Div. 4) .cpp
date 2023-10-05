#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    int m , n;

    int a,b,c;

    cin>> t ;
    while(t--){

        cin>>a>>b>>c;

        m=max(max(a,b),c);

        n= min(min(a,b),c);

        if(a!=m && a!=n){
                cout<<a<<endl;

        }
        else if (b!=m && b!=n){
                cout<<b<<endl;


        }

        else if(c!=m && c!=n){
            cout<<c<<endl;
        }

           }

    return 0;
}
