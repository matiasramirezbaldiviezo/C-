#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n > 2 || s == "11" || s == "00") {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}