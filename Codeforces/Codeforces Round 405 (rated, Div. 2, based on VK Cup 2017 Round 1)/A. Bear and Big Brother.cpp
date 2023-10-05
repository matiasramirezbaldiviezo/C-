#include <iostream>
#include <string>
using namespace std;

int main() {
    int a,b;
    cin >> a;
    cin >> b;
    int x=0;
    while (b>=a){
        a=a*3;
        b=b*2;
        x++;
    }
    cout<<x<<endl;
    return 0;
}

