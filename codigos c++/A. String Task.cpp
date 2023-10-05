#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
            int n;
            cin>>n;
            vector <int> v(n);
            vector <int> w(n);
            int m=0;
            int a=0;
            for(int i = 0 ; i<n; i++){
                cin>>v[i];
                w[i]=i+a;

            if((v[i]+a)==(i+1)){
                a++;
                w[i]=i+a+1;



            }
            else{
                w[i]=i+a+1;



                }
            }
            for(int i=0 ;i<n ; i++){

                cout<<w[i]<<endl;

            }

            }

    return 0;
}
