#include "musica.h"

using namespace std;

int main(){
    Musica m1, m2;
    m1.preencher();
    m2.preencher();

    cout << "                " << endl;
    cout << "A musica mais longa e:" << endl;
    cout << "                " << endl;

    if(m1.getDuracao() > m2.getDuracao()){
        m1.imprimir();
    } else if(m2.getDuracao() > m1.getDuracao()){
        m2.imprimir();
    } else 
        cout << "As musicas tem a mesma duracao." << endl;
    return 0;
}