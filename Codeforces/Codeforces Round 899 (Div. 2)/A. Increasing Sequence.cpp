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
                w[i]=i+a+1;

            if((w[i])==v[i]){
                a++;
                w[i]=i+a+1;




            }
            else{
                w[i]=i+a+1;


                }
            }
            cout<<w[n-1]<<endl;

            }

    return 0;
}
