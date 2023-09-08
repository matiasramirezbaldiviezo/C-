#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string pasar_a_s(int num) {
    stringstream ss;
    ss << num;
    return ss.str();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        if (n > 10) {
            string tempo = s.substr(0, 1) + pasar_a_s(n - 2) + s.substr(n - 1, 1);
            cout << tempo << endl;
        } else {
            cout << s << endl;
        }
    }

    return 0;
}
