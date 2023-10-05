#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int x;
    cin>>x;

    string s;
    cin>>s;
    set <char> v;


    for(int i= 0 ; i<x ; i++){
        v.insert(toupper(s[i]));
    }
    if(v.size()>=26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
