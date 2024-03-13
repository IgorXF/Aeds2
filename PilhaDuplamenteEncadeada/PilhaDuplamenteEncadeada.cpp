#include "PilhaDuplamenteEncadeada.h"
#include<iostream>

using namespace std;

PilhaDuplamenteEncadeada::PilhaDuplamenteEncadeada() {
    quant = 0;
    head = NULL;
}

PilhaDuplamenteEncadeada::~PilhaDuplamenteEncadeada() {
    //será chamado quando o objeto for destruido
}



void PilhaDuplamenteEncadeada::preencher() {
    int q = 0;
    do{
        cout << "Quantos elementos voce deseja inserir:";
        cin >> q;
    }while(q < 0);
    
    for(int i=0; i<= q-1 ;i++){
        this->push();
    }
}

void PilhaDuplamenteEncadeada::push() {
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

void PilhaDuplamenteEncadeada::pop() {
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

bool PilhaDuplamenteEncadeada::isEmpty() {
    if (quant == 0)
        return true;
    else
        return false;

}

void PilhaDuplamenteEncadeada::imprimir() {
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
void PilhaDuplamenteEncadeada::setQuant(int quant) {
    this->quant = quant;
}

int PilhaDuplamenteEncadeada::getQuant() const {
    return quant;
}
