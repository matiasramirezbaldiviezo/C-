#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    long long sum=0;

    if (t % 2 == 1) {
        sum = (-1) * (t + 1) / 2;
    } else {
        sum = t / 2;
    }
    cout<<sum<<endl;


    return 0;
}
