#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int ne, nh;
    double  monto, suma=0.0;

    cin >> ne;
    cin >> nh;
    cin >> monto;
    suma =(double)nh*monto;
    cout << "NUMBER = " << ne<<endl ;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " <<suma<< endl;


    return 0;
}
