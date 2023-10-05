#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int w=n;

        set<int> s;

       while(n--){

            int p;
            cin >> p;
            while(p--){
                int x;
                cin>>x;
                    s.insert(x);

            }


    }

        if (w == 1) {
            cout << "0" << endl;
        } else {
            cout << s.size()-1 << endl;
        }

        s.clear();
    }

    return 0;
}
