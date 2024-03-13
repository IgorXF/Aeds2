#include <iostream>
#include <string>
#include "motor.h"

using namespace std;

int main(){
    Motor m1("Gasolina", 180.0, 1.8);
    Motor m2("Eletrico", 110.0, 2.0);

    if(m1.getPotencia() > m2.getPotencia()){
        cout << "e o motor 1 " << endl;
    }else
        cout << "e o motor 2 " << endl;

    return 0;
}