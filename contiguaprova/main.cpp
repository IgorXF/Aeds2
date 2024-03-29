#include <cstdlib>
#include "Produto.h"
#include "ListaContigua.h"
using namespace std;

void menuOpcoes() {
    cout << "\n\t\t------------------------------" << endl;
    cout << "\t\t             Menu               " << endl;
    cout << "\t\t 1 - Inserir(1) "          << endl;
    cout << "\t\t 2 - Inserir(posicao)  "   << endl;
    cout << "\t\t 3 - Remover(1) "          << endl;
    cout << "\t\t 4 - Remover(posicao)    " << endl;
    cout << "\t\t 5 - Buscar por id do produto  " << endl;
    cout << "\t\t S - Sair "                << endl;
    cout << "\t\t--------------------------------"<< endl;
    cout << "\t\tEscolhar uma opcao:";
}

int main() {
    int pos;
    char opcao = 's';
    ListaContigua l;

    do {
        menuOpcoes();
        cin >> opcao;
        cout << "\t\t----------------------------\n";

        switch (opcao) {
            case '1':
                l.insert();
                break;
            case '2':
                cout << "Posicao da insercao:";
                cin >> pos;
                l.insert(pos);
                break;
            case '3':
                l.remove();
                break;
            case '4':
                cout << "Posicao da remocao:";
                cin >> pos;
                l.remove(pos);
                break;
            case '5':
                int id = -1;
                cout << "Informe o id do produto procurado:";
                cin >> id;
                int index = l.buscar(id);
                if(index != -1){
                    cout << "Produto encontrado na posicao ["<<index<<"]"<<endl;                    
                }
                    
                break;
        }
        l.imprimir();
    } while (opcao != 's' && opcao!='S');

    return 0;
}