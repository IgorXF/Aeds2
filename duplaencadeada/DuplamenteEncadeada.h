#ifndef DUPLAMENTEENCADEADA_H
#define	DUPLAMENTEENCADEADA_H

#include "Produto.h"
#include "Nodo.h"

class DuplamenteEncadeada {
private:
    int quant;
    Nodo *head;

    bool isEmpty (); 
public:
    DuplamenteEncadeada();
    virtual ~DuplamenteEncadeada();
    
    void insert(); 
    void insert(int posicao);
    
    void remove(); 
    void remove(int posicao);
    
    Nodo* buscar(int idProduto);   
    Nodo* getElemento(int posicao);
        
    void imprimir();
    void preencher();                
    
    //GETTERS E SETTERS
    void setQuant(int quant);
    int getQuant() const;
};

#endif	

