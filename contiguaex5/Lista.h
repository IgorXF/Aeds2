
#include "Livro.h"

class ListaContigua {
private:
    int tam, quant;
    Livro *lista;
    
    int contadorDeComparacoes;
    
    bool temEspaco(); 
    bool isEmpty ();
    bool indiceValido(int i);
    void shiftFront(int aPartir);
    void shiftEnd(int ate);
    void criaListaComProdutosAleatorios(int tam);

public:
    ListaContigua();
    ListaContigua(int tamanho);
    ListaContigua(const ListaContigua& outra);
    ListaContigua(const ListaContigua& outra, int novoTamanho);
    virtual ~ListaContigua();
            
    void insert();
    void insert(int posicao);
    void insert(Livro l);
    void remove();
    void remove(int posicao);
    
    void imprimir();
    void preencher();    
    double buscar(int id); 
       
    double buscaBinaria(int id);
    
    //GETTERS E SETTERS
    void setLista(Livro* lista);
    Livro* getLista() const;
    void setQuant(int quant);
    int getQuant() const;
    void setTam(int tam);
    int getTam() const;
};