#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;

    for(int i =0 ; i<s.length();i++){
        s[i]=tolower(s[i]);
        if(i==0){
            s[i]=toupper(s[i]);
        }
        cout<<s[i];

    }

    cout<<endl;

    return 0;




}
