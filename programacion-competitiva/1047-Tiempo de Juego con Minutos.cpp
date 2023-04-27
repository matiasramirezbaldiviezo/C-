#include <iostream>
using namespace std;

int main() {
    int hi, hf, mi, mf;
    int h = 0, m = 0;

    cin >> hi >> mi >> hf >> mf;

    if (hf < hi) {
        h = 23 - hi + hf;
        m = 60 - mi +mf;
    } else if (hf == hi) {
        if (mf < mi) {
            h = 23;
            m = 60 - mi + mf;
        } else if (mf == mi) {
            h = 24;
        } else {
            m = mf - mi;
        }
    } else {
        h = hf - hi;
        if (mf < mi) {
            m = 60 - mi + mf;
            h--;
        } else {
            m = mf - mi;
        }
    }

    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;

    return 0;
}
