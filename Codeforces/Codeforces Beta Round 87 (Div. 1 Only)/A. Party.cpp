#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        ll h[k];

        for(ll i=0;i<k;i++)
        {
            cin>>h[i];
            if(h[i]>=n)
            {
                h[i]=min(h[i],n-1);
            }

        }
       ll seg=m;
        for(ll i=0;i<k;i++)
        {
           seg=seg+h[i];
        }
        cout<<seg<<endl;

    }

    return 0;




}
