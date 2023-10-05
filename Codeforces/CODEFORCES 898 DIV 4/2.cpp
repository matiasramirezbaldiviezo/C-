#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main() {

    int t:

    cin>> t ;
    while(t--){
        string s;
        cin>>s;
        int iguales =0 ;

        int d=0;

        if (s[0]=!'a')d++;
        if (s[1]=!'b')d++;
        if (s[2]=!'c')d++;


        if(d==2){
            cout<<"YES"<<endl;
        }
        else if(d==3){
            cout<<"NO"<<endl;
        }

}
