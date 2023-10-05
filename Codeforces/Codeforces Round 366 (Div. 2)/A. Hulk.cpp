#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    string s;
    string b="I love ";
    string m="I hate ";

    for(ll i=0 ; i<n;i++){
        if(i==0){
            s=m;
        }
        else{
            s=s+"that ";
            if(i%2==0){
                s=s+m;

            }else{
                s=s+b;
            }
        }

    }
    s=s+"it";
    cout<<s<<endl;

    return 0;




}
