#include "bicicleta.h"

using namespace std;

int main(){
    Bicicleta b1, b2;
    b1.preencher();
    b2.preencher();

    cout << "                " << endl;
    cout << "A bike mais cara e:" << endl;
    cout << "                " << endl;

    if(b1.getPreco() > b2.getPreco()){
        b1.imprimir();
    } else if(b2.getPreco() > b1.getPreco()){
        b2.imprimir();
    } else 
        cout << "as bikes tem o mesmo preco" << endl;
    return 0;
}