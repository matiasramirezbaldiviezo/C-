#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double z,x,c,v,b,n;
        cin >> fixed >> setprecision(1) >> z;
        cin >> fixed >> setprecision(1) >> x;
        cin >> fixed >> setprecision(1) >> c;
        cin >> fixed >> setprecision(1) >> v;

        double prom=((z*0.2)+(x*0.3)+(c*0.4)+(v*0.1));
        if(prom>=7.0){
                cout<<"Media : "<< fixed << setprecision(1) << (prom)<<endl;
                cout<<"Aluno aprovado." <<endl;

        }
        else if(prom<5.0 ){
                cout<<"Media : "<< fixed << setprecision(1) << (prom)<<endl;
                cout<<"Aluno reprovado." <<endl;
        }
        else{
             cin >> fixed >> setprecision(1) >> b;
              cout<<"Media : "<< fixed << setprecision(1) << (prom)<<endl;
              cout<<"Aluno em exame." <<endl;
              cout<<"Nota do exame: "<< fixed << setprecision(1) << b<<endl;

              if(((prom+(b*10))/2)>=5.0){
                    cout<<"Aluno aprovado."<<endl;
                    cout<<"Media final: "<< fixed << setprecision(1) << ((prom+(b))/2)<<endl;

              }
              else{
                    cout<<"Aluno reprovado."<<endl;
                    cout<<"Media final: "<< fixed << setprecision(1) << ((prom+(b))/2)<<endl;

              }


        }


    return 0;
}
