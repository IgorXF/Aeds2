#include "Nodo.h"

Nodo::Nodo() {
    ant = NULL;    
    prox = NULL;    
}

Nodo::Nodo(Produto& p){
    item.copiar(p);
    ant = NULL;    
    prox = NULL;
}


Nodo::Nodo(const Nodo& outro) {
    item.copiar(outro.getItem());
    ant = outro.getAnt();
    prox = outro.getProx();
}

Nodo::~Nodo() {
}

/**
 * GETTERS e SETTERS
 */

void Nodo::setProx(Nodo* prox) {
    this->prox = prox;
}

Nodo* Nodo::getProx() const {
    return prox;
}

void Nodo::setItem(Produto item) {
    this->item = item;
}

Produto Nodo::getItem() const {
    return item;
}

void Nodo::setAnt(Nodo* ant) {
    this->ant = ant;
}

Nodo* Nodo::getAnt() const {
    return ant;
}

