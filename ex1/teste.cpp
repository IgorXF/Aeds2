#include <iostream>
#include <string>

//novamente se inclui o arquivo .h.
#include "livro.h"

using namespace std;

int main(){
    //preenchimento das classes.
    Livro l1("Parque dos Dinossauros" , "Michael Crichton" , "Rocco e L&PM Pocket" , 416);
    Livro l2("Fogo e Sangue" , "George R. R. Martin" , "Bantam" , 664);

    //verificacao para chegar ao livro que tem mais paginas.
    if(l1.getPaginas() > l2.getPaginas()){
        cout << "o livro 1 tem mais paginas." << endl;
        l1.imprimir();
    }
    else if(l1.getPaginas() < l2.getPaginas()){
        cout << "o livro 2 tem mais paginas." << endl;
        l2.imprimir();
    } else {
        cout << "os dois tem o mesmo tanto de paginas" << endl;
    }
    return 0;
}
