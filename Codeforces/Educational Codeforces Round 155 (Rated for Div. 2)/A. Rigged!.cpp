#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        long long sum = 0 ;
        long long sum1 = 0;
        int c;
        cin >> c;
        vector<int> q(c);
        vector<int> w(c);

        for (int f = 0; f < c; f++) {
            cin >> w[f];
        }
        for (int f = 0; f < c; f++) {
            cin >> q[f];
        }
        sort(w.begin(), w.end());
        sort(q.begin(), q.end());

        for (int u = 0; u < c; u++) {
            sum1 =sum1+ w[0] + q[u];
            sum =sum +  q[0] + w[u];

        }

        cout << min(sum,sum1) << endl;
    }
    return 0;
}
