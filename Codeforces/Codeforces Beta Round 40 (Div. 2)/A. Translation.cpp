#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string v;
    string c;
    bool q = false;
    cin >> s;
    cin >> v;

    if (s.size() != v.size()) {
        q = true;
    } else {
        c = s;
        for (int i = 0; i < s.size(); i++) {
            c[i] = s[s.size() - i - 1];
            if (v[i] != c[i]) {
                q = true;
                break;
            }
        }
    }
    if (!q) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

