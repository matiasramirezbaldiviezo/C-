#include <iostream>
#include <string>
#include <cstdio>   // para scanf

using namespace std;

int main() {
    int n;
    int total=1;

    cin>>n;


    
        for(int i=1;i<=n;i++){
            total=i*total;
            cout<<total<<endl;
        }

    cout<<total<<endl;

    return 0;
}
