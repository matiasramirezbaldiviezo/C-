#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int hi, hf , mi,mf;
    int cont=0,h=0,m=0;


    cin >> hi;
    cin >> mi;
    cin >> hf;
    cin >> mf;

    h= (hf-hi);
    m= (mf-mi);


    if(hi==hf && hi==mi && mi==mf){
       cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)";
    }
    else{
            if(hi>=hf && mf>mi){
                cout<<"O JOGO DUROU 23 HORA(S) E "<<m<<" MINUTO(S)";


    }


    }

    return 0;
}
