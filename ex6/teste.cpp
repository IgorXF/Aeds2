#include "filme.h"

using namespace std;

int main(){
    Filme f1, f2;
    f1.preencher();
    f2.preencher();

    cout << "                " << endl;
    cout << "o Filme mais longo e:" << endl;
    cout << "                " << endl;

    if(f1.getDuracao() > f2.getDuracao()){
        f1.imprimir();
    } else if(f2.getDuracao() > f1.getDuracao()){
        f2.imprimir();
    } else 
        cout << "os filmes tem a mesma duracao." << endl;
    return 0;

}