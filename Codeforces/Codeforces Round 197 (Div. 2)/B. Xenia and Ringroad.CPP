#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    //  tamaño 1,2,3,4
    int n;
    cin>>n;
    // tamaño llenaod --3
    int t;
    cin >> t;
    vector <int> v(n);
    vector <int> w(t);
    bool b=false;
    int aux=t;
    int cont=0;

    //vector llenado a mano
    for(int i = 0 ;i<t;i++){
        cin>>v[i];
    }
    // vector 1,2,3,4
    for(int i = 0 ;i<n;i++){
        w[i]=i+1;
    }

    while(aux>0){
    for(int i = 0 ;i<t;i++){
        for(int j=0; j<n ;j++){
            if(w[j]==v[i]){
                aux--;
                break;
        }
        cont++;

        cout<<"w   "<<w[j]<<endl;
        cout<<"v   "<<v[i]<<endl;
        cout<<"auxxx"<<aux<<endl;
        }
    }

        }

    cout<<cont<<endl;



    return 0;
}
