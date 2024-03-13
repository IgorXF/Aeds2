#include "DuplamenteEncadeada.h"
#include<iostream>

using namespace std;

DuplamenteEncadeada::DuplamenteEncadeada() {
    quant = 0;
    head = NULL;
}

DuplamenteEncadeada::~DuplamenteEncadeada() {
    //será chamado quando o objeto for destruido
}

/**
 * Retorna o endereco do elemento da posiçao: n
 * @param posicao
 * @return 
 */
Nodo* DuplamenteEncadeada::getElemento(int n) {
    Nodo* p = head;
    int j = 1;

    while (j <= n - 1 && p->getProx() != NULL) {
        p = p->getProx();
        j++;
    }

    if (j == n)
        return p;
    else
        return NULL; // posicao invalida

}

Nodo* DuplamenteEncadeada::buscar(int idProduto) {
    for (Nodo*p = head; p != NULL; p = p->getProx()) {
        if (p->getItem().getId() == idProduto)
            return p;
    }
    return NULL;
}

void DuplamenteEncadeada::preencher() {
    int q = 0;
    do{
        cout << "Quantos elementos voce deseja inserir:";
        cin >> q;
    }while(q < 0);
    
    for(int i=0; i<= q-1 ;i++){
        this->insert();
    }
}

void DuplamenteEncadeada::insert() {
    Produto p;
    p.preencher();
    Nodo *novo;
    novo = new Nodo(p);
    
    if(quant == 0){ //Lista está vazia
        head = novo;
    }else{
        novo->setProx(head);
        head->setAnt(novo);
        head = novo;
    }
    
    quant++;
}

/*
 * Por padrão, a inserção é na posição que o usuario pediu. Assim sendo, 
 * sempre será inserido e terá um no na frente dele.
 * Por isso, para inserir na ultima posição e o nó ser ultimo, precisamos
 * fazer um caso especial que é o if(n = quant+1)
 */
void DuplamenteEncadeada::insert(int n) {
    if (n >= 1 && n <= quant + 1) {
        Produto p;
        p.preencher();
        Nodo* novo = new Nodo();
        novo->setItem(p);

        if (n == 1) { //estamos no mesmo caso de inserir na 1 posicao					
            insert();
        } else if (n == quant + 1) { //inserindo depois da ultima posicao
            Nodo* ultimo = this->getElemento(n-1);
            novo->setProx(NULL);
            novo->setAnt(ultimo);
            ultimo->setProx(novo);
        } else {//inserindo nas posições "do meio"
            Nodo* elemento = this->getElemento(n);
            Nodo* anterior = elemento->getAnt();
            novo->setProx(elemento);
            novo->setAnt(anterior);
            anterior->setProx(novo);
            elemento->setAnt(novo);
        }
        quant++;
    } else {
        cerr << "Operação inválida para esta posição.";
    }
}

void DuplamenteEncadeada::remove() {
    if(quant > 0){
        if(quant == 1){
            head = head->getProx();
            //não tem segundo elemento para fazer o apontamento para trás
        }else { //lista tem mais de um elemento
            head = head->getProx();
            head->setAnt(NULL);
        }
        quant--;
    }else{
        cout << "Operacao invalida - Lista vazia";
    }
}

void DuplamenteEncadeada::remove(int posicao) {
    if (posicao >= 1 && posicao <= quant) {
        if (posicao == 1) {
            remove();            
        }else if (posicao == quant) { //removendo a última posicao
            Nodo* elemento = this->getElemento(posicao);
            Nodo* anterior = elemento->getAnt();
            
            anterior->setProx(NULL);            
            elemento->setAnt(NULL);
            quant--;
        } 
        else { //removendo um elemento "do meio". Que possui antecessor e sucessor
            Nodo* elemento = this->getElemento(posicao);
            Nodo* anterior = elemento->getAnt();
            Nodo* posterior = elemento->getProx();
            
            anterior->setProx(posterior);
            posterior->setAnt(anterior); 
            elemento->setAnt(NULL);
            elemento->setProx(NULL);
            quant--;
        }
        
    }else{
        cout << "Operacao inválida para está posicao."<<endl;
    }
}

bool DuplamenteEncadeada::isEmpty() {
    if (quant == 0)
        return true;
    else
        return false;

}

void DuplamenteEncadeada::imprimir() {
    cout << "\n>> Lista [ ";
    if (!isEmpty()) {
        Nodo* p = head;
        while (p != NULL) {
            p->getItem().imprimirResumido();
            p = p->getProx();
        }
    }
    cout << " ] \n";
}

/**
 *  GETTERS E SETTERS 
 */
void DuplamenteEncadeada::setQuant(int quant) {
    this->quant = quant;
}

int DuplamenteEncadeada::getQuant() const {
    return quant;
}
