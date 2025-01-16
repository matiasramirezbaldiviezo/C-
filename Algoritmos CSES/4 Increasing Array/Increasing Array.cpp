#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long v[n];
    long long aux=0;

    for (int i = 0 ; i<n ; i++){
        cin >>v[i];
    }

    for (int i = 0 ; i<(n-1) ; i++){

        if(i==0){
               if(v[i]> v[i+1]){
                        aux=(v[i]-v[i+1]);
                        v[i+1]= v[i];
                        //cout<<(v[i])<<"    " <<  v[i+1]  <<"  p "<<(aux)<<endl;
                    }
        }

        else {

                    if(v[i] > v[i+1]){
                       aux=aux+(v[i]-v[i+1]);
                       v[i+1]= v[i];

                       //cout<<(v[i])<<"    " <<  v[i+1]  <<"  i "<<i <<"  " <<(aux)<<endl;
                       //cout<<i<<"   "<<(aux)<<endl;
                    }
        }

    }
    cout<<(aux)<<endl;
    return 0;
}
