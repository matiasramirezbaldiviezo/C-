#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = to_string(n);
    int b = 0;

    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == '4' && s[i + 1] == '7') {
            cout << "YES" << endl;
            b++;
            break;
        }
    }

    if (b == 0 && (n % 7 == 0 || n % 4 == 0)) {
        cout << "YES" << endl;
    } else if (b == 0) {
        cout << "NO" << endl;
    }

    return 0;
}
