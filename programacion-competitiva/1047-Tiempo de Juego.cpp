#include <iostream>
using namespace std;

int main() {
    int hi, hf;
    int h = 0;

    cin >> hi >> hf;

if (hf < hi) {
            h=24-hi+hf;

}
else{
        if(hf==hi){
            h=24;

        }else{
            h=hf-hi;

        }


    }

    cout << "O JOGO DUROU " << h << " HORA(S)"<< endl;

    return 0;
}
