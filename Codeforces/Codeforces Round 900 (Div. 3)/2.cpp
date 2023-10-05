#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int lim=0;
    int sum=0;

    while (t--) {
        int n, k,x;
        cin >> n;
        cin >> k;
        cin >> x;

        for (int i = 0; i <n; i++) {
            v[i]=2+i;
            sum=sum+v[i];
            if(sum==k){
                lim=v[i];
            }

        }

        if(k==aux)

        if()


        if(k==1 && n<=x){
                 cout<<"NO"<<endl;
                break;

        }


        for (int i = 0; i <k; i++) {
            x=x-v[i];
        }
        if(x==0){
                cout<<"YES"<<endl;

        }
        else{
             cout<<"NO"<<endl;
        }


        }

    return 0;
}
