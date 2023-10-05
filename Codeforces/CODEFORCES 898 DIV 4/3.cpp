#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main() {

    cin.tie(0);
    ios::sync_with_stdio(0);
    string s;
    int k;
    cin >> s;
    cin >> k;
    for (int i = 0; i < min(k, (int)s.size()); i++) {
        string p;
        for (int j = i; j < s.size(); j += k) {
            p += s[j];
        }


        sort(p.begin(), p.end());
        int aux = 0;
        for (int j = i; j < s.size(); j += k) {
            s[j] = p[aux++];
        }
    }
    cout << s << endl;
}
