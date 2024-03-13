#include <cstdlib>
#include "Cachorro.h"
#include "ListaContigua.h"

using namespace std;

/*
 * 
 */
int main() {
    ListaContigua listaArquivo(200);
    listaArquivo.loadLista();

  
//    listaArquivo.criarListaRandom();
//    listaArquivo.saveLista();


    //listaArquivo.buscar(20);
    listaArquivo.buscaBinaria(20);
    //
    //    ListaContigua listaArquivo;
    //    listaArquivo.loadLista();
    //    listaArquivo.buscar();
    //    listaArquivo.buscaBinaria();

    //    ListaContigua listaCadelas(80);
    //    ListaContigua listaCachorros;
    //    
    //    Cao rex, toto;
    //    rex.SetNome("Rex");
    //    rex.SetRaca("Boxer");
    //    rex.SetIdade(8);
    //    rex.SetSexo('M');
    //    toto.copiar(rex);
    //    toto.SetNome("Toto");
    //    
    //    Cao dolly("Dolly", "Boxer", 10, 'F');
    //    
    //    listaCadelas.insert(dolly);
    //    listaCachorros.insert(rex);
    //    listaCachorros.insert(toto);
    //    
    //    Cao c("tilzim","vira_lata",8, 'M');
    //    listaCachorros.insert(c);
    //    listaCachorros.print();

    return 0;
}

