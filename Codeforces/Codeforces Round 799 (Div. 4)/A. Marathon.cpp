#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    while(n--){
    vector <int> v(4);
    ll cont =0;
    ll a;

    for (ll i=0 ; i <4;i++){
        if(i==0 ){
                cin>>v[i];
                a=v[i];
        }
        else{
                cin>>v[i];
                if(v[i]>a){
                    cont++;
                }
        }

    }
    cout<<cont<<endl;

    }

    return 0;




}
