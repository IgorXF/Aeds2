
#ifndef LISTAPRODUTO_H
#define	LISTAPRODUTO_H

#include "Produto.h"

class ListaContigua{
private:
    int tam, quant;
    Produto* lista;
    
    bool temEspaco(); 
    bool isEmpty();
    bool indiceValido(int i);
    void shiftFront(int aPartir);
    void shiftEnd(int ate);
    void criaListaComProdutosAleatorios(int tam);
public:
    ListaContigua();
    ListaContigua(int tam);
    ListaContigua(ListaContigua& outra);
    ListaContigua(ListaContigua& outra, int novoTam);
    virtual ~ListaContigua();

    void insert();
    void insert(int posicao);
    void insert(Produto p);
    void remove();
    void remove(int posicao);

    void imprimir();
    void preencher();
    int buscar(int id);
    void insertionSort();
    void ordenar();
    int buscaBinaria(int codigoProcurado);
    Produto* buscar(double preco);

    void setTam(int tam);
    void setQuant(int quant);
    void setLista(Produto* lista);

    int getTam();
    int getQuant();
    Produto* getLista();
};

#endif	/* LISTAPRODUTO_H */