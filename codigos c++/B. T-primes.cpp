#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    int l;
    int aux1=0;
    while(t--){
            int aux=0;
            cin>>l;

            for (int i = 1; i <= l; i++) {
                if (l % i == 0) {
                    aux++;
                    //cout<<"cantidad "<<aux<<endl;
        }
    }


    if(aux==3){
            cout<<"YES"<<endl;


    }
    else{
             cout<<"NO"<<endl;

    }
    aux=0;



    }

    return 0;
}
