#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,x;
    cin>>i;
    cin>>x;
    ll aux=0;
    while (i--){
        char s;
        ll n;
        cin>>s;
        cin>>n;

        if(s=='+'){
            x=x+n;
        }
        else{
                if(x-n>=0){
                    x=x-n;
                }
                else{
                    aux++;
                }
        }
    }
    cout<<x<<" "<<aux<<endl;

    return 0;




}

