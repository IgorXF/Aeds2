#ifndef NODO_H
#define	NODO_H

#include "Produto.h"

class Nodo {
private:
    Produto item;
    Nodo* ant;
    Nodo* prox;

public:
    Nodo();
    Nodo(Produto &p);
    Nodo(const Nodo& orig);
    virtual ~Nodo();
    
    
    //GETTERS e SETTERS
    void setProx(Nodo* prox);
    Nodo* getProx() const;
    void setItem(Produto item);
    Produto getItem() const;
    void setAnt(Nodo* ant);
    Nodo* getAnt() const;

    

};

#endif	/* NODO_H */

