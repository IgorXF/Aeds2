#include "casa.h"

using namespace std;

int main(){
    Casa c1, c2;
    c1.preencher();
    c2.preencher();

    cout << "                " << endl;
    cout << "A mais cara e:" << endl;
    cout << "                " << endl;
    if(c1.getPreco() > c2.getPreco()){
        c1.imprimir();
    } else if(c2.getPreco() > c1.getPreco()){
        c2.imprimir();
    } else 
        cout << "as casas tem o mesmo preco" << endl;
    return 0;
}