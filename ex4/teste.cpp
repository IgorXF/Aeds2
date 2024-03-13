#include "animal.h"

using namespace std;

int main(){
    Animal a1, a2;
    a1.preencher();
    a2.preencher();

    cout << "                " << endl;
    cout << "O mais pesado e:" << endl;
    cout << "                " << endl;

    if(a1.getPeso() > a2.getPeso()){
        a1.imprimir();
    } else if(a2.getPeso() > a1.getPeso()){
        a2.imprimir();
    } else 
        cout << "as casas tem o mesmo peso" << endl;
    return 0;
}