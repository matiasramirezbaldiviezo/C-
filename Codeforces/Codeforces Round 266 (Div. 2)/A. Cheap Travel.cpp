#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m, a, b;
    cin>>n>>m>>a>>b;
    ll sum =n*a;
    ll sump=0;
    ll aux=m;
    ll q=0;
    ll r=0;


    while(m>n){
        r=1;
        break;
    }
    while (n>=m){
        q=abs(n-m);
        m=m+aux;

        r++;


    }
    if(n==1){
        cout<<min(a,b)<<endl;

    }
    else{
        if((r*b+(q)*a)<((r+1)*b)){
        sump=r*b+(q)*a;
    }
    else{
        sump=(r+1)*b;
    }
    cout<<min(sum,sump)<<endl;
    }

    return 0;




}
