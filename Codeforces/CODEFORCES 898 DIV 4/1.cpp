#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int sum = 0;
        char v[10][10];

        int fila = 0;
        int columna = 0;

        for (int f = 0; f < 10; f++) {
            for (int c = 0; c < 10; c++) {
                cin >> v[f][c];

                if (v[f][c] == 'X') {
                    fila = f;
                    columna = c;

                    if (fila > 4) {
                        fila =abs(fila-9);
                    }

                    if (columna > 4) {
                        columna = abs(columna-9) ;
                    }

                    int m = min(fila, columna);
                        sum = sum+ (m+1);
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
