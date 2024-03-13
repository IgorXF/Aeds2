#include "Produto.h"
#include "Nodo.h"

class PilhaDuplamenteEncadeada {
private:
    int quant;
    Nodo *head;

    bool isEmpty (); 
public:
    PilhaDuplamenteEncadeada();
    virtual ~PilhaDuplamenteEncadeada();
    
    void push(); 
    void pop(); 
    void imprimir();
    void preencher();        
    //os metodos inserir e remover viram push e pop, mas nada além dos nomes é alterado no codigo
            
    //não há inserir ou remover na posição
    // não há get elemento, pois graças a politica da pilha não faria sentido aqui, pois o acesso é sempre no topo 
    // first in, last out FILO
    
    //GETTERS E SETTERS
    void setQuant(int quant);
    int getQuant() const;
};



