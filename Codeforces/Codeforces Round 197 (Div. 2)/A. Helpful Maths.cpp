#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    vector <int> v;

    for(int i= 0 ; i<s.length();i++){
        f(s[i]>='0'&& s[i]<='9')
		a[t++]=s[i]-'0';

    }
    ll aux=1;
    ll aux1=0;

    vector<int> v(t);

    for( ll i =  0; i<t ;i++){
        cin>>v[i];
        if(i==0){

        }
        else{
            if(v[i]>=v[i-1]){
                aux++;
                if(aux>=aux1){
                    aux1=aux;
                }
            }
            else{
                aux=1;
            }

        }

    }
    cout<<max(aux1,aux)<<endl;

    return 0;




}
