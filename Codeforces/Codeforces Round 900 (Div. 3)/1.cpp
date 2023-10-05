#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m, k;
        cin >> m;
        cin >> k;
        bool r = false;
        vector<int> v(m);

        for (int i = 0; i < m; i++) {
            cin >> v[i];
            if (v[i] == k) {
                r = true;
            }
        }

        if (r) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
