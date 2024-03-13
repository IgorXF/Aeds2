
#ifndef LISTAPRODUTO_H
#define	LISTAPRODUTO_H

#include "Cachorro.h"

class ListaContigua {
private:
    int tam, quant;
    Cachorro *lista;
    
    int contadorDeComparacoes;
    
    bool temEspaco(); 
    bool isEmpty ();
    bool indiceValido(int i);
    void shiftFront(int aPartir);
    void shiftEnd(int ate);    
    

public:
    ListaContigua();
    ListaContigua(int tamanho);
    ListaContigua(const ListaContigua& outra);
    ListaContigua(const ListaContigua& outra, int novoTamanho);
    virtual ~ListaContigua();
            
    void insert();
    void insert(int posicao);
    void insert(Cachorro c);
    
    void remove();
    void remove(int posicao);
    
    void imprimir();
    void preencher();    
    Cachorro buscar(int id);        
    int buscaBinaria(int codigoProcurado);
    
    void loadLista();
    void saveLista();
    void criarListaRandom();
    
    //GETTERS E SETTERS
    void setLista(Cachorro* lista);
    Cachorro* getLista() const;
    void setQuant(int quant);
    int getQuant() const;
    void setTam(int tam);
    int getTam() const;
};

#endif	/* LISTAPRODUTO_H */

