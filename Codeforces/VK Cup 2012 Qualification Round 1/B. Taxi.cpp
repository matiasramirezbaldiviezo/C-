#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    vector <int> w(n);

    for (int i = 0; i < n ; i++) {
        cin>>v[i];
       if(v[i]==1) {
            w[0]=w[0]+1;

       }
       else if(v[i]==2){
            w[1]=w[1]+1;
       }
       else if(v[i]==3){
            w[2]=w[2]+1;
       }
       else{
           w[3]=w[3]+1;
       }
    }
    for (int i = 0; i < n-w[3] ; i++) {
        if(w[0]>1 && w[2]>0){
            w[0]=w[0]-2;
            w[1]=w[1]-1;
        }
       if(w[2]>0 && w[0]>0){
        w[2]=w[2]-1;
        w[0]=w[0]-1;
        w[3]=w[3]+1;
       }
       if(w[1]>2){
        w[1]=w[1]-2;
        w[3]=w[3]+1;
       }

    }

    cout<<w[0]+w[1]+w[2]+w[3]<<endl;

    return 0;
}
