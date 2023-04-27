#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
double num;
double ns,rg;
int pr;
    cin >> fixed >> setprecision(2) >> num;
    cout<<num<<endl;
    if(num>=0 && num<=400.00){
            rg=num*0.15;
            ns=num*0.15+num;
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << ns << endl;
    cout << fixed << setprecision(2);
    cout << "Reajuste ganho: " << rg << endl;
    cout << fixed << setprecision(0);
    cout << "Em percentual: 15 % "<< endl;

    }
    else if(num>400.00 && num<=800.00){
            rg=num*0.12;
            ns=num*0.12+num;
            cout << fixed << setprecision(2);
    cout << "Novo salario: " << ns << endl;
    cout << fixed << setprecision(2);
    cout << "Reajuste ganho: " << rg << endl;
    cout << fixed << setprecision(0);
    cout << "Em percentual: 12 % "<< endl;
    }
    else if(num>800.00 && num<=1200.00){
            rg=num*0.10;
            ns=num*0.10+num;
            cout << fixed << setprecision(2);
    cout << "Novo salario: " << ns << endl;
    cout << fixed << setprecision(2);
    cout << "Reajuste ganho: " << rg << endl;
    cout << fixed << setprecision(0);
    cout << "Em percentual: 10 % "<< endl;
    }
    else if(num>1200.00 && num<=2000.00){
            rg=num*0.07;
            ns=num*0.07+num;
           cout << fixed << setprecision(2);
    cout << "Novo salario: " << ns << endl;
    cout << fixed << setprecision(2);
    cout << "Reajuste ganho: " << rg << endl;
    cout << fixed << setprecision(0);
    cout << "Em percentual: 7 % "<< endl;
    }
    else if(num>2000.00){
            rg=num*0.04;
            ns=num*0.04+num;
            cout << fixed << setprecision(2);
    cout << "Novo salario: " << ns << endl;
    cout << fixed << setprecision(2);
    cout << "Reajuste ganho: " << rg << endl;
    cout << fixed << setprecision(0);
    cout << "Em percentual: 4 % "<< endl;
    }






    return 0;
}
