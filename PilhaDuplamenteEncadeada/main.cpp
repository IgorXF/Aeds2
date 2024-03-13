#include <cstdlib>

#include "Produto.h"
#include "PilhaDuplamenteEncadeada.h"

using namespace std;

void menuOpcoes() {
    cout << "\n\t\t-------------------------------" << endl;
    cout << "\t\t             Menu               " << endl;
    cout << "\t\t1 - Push " << endl;
    cout << "\t\t2 - Pop " << endl;
    cout << "\t\tS - Sair " << endl;
    cout << "\t\t-------------------------------  " << endl;
    cout << "\t\tEscolhar uma opcao:";
}

int main() {
    int pos;
    char opcao = 's';
    PilhaDuplamenteEncadeada l;

    do {
        menuOpcoes();
        cin >> opcao;
        cout << "\t\t----------------------------\n";

        switch (opcao) {
            case '1':
                l.push();
                break;
            case '2':
                l.pop();
                break;
        }
        l.imprimir();
    } while (opcao != 's' && opcao!='S');

    return 0;
}

