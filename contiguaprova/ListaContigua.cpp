#include "ListaContigua.h"
#include<iostream>

using namespace std;

ListaContigua::ListaContigua() {
    quant = 0;
    cout << "Informe o tamanho desejado: ";
    cin >> tam;
    lista = new Produto[tam];
}

ListaContigua::ListaContigua(int tamanho) {
    quant = 0;
    tam = tamanho;
    lista = new Produto[tam];
}

ListaContigua::ListaContigua(ListaContigua& outra) {
    quant = outra.getQuant();
    tam = outra.getTam();
    lista = outra.getLista();
}

ListaContigua::ListaContigua(ListaContigua& outra, int novoTamanho) {
    quant = outra.getQuant();
    tam = novoTamanho;
    lista = new Produto[tam];
    
    for(int i=0; i<=quant-1; i++){
        lista[i].copiar(outra.getLista()[i]);
    }    
}

ListaContigua::~ListaContigua() {
    delete []lista;
}

void ListaContigua::insert(){
    if(!temEspaco()){
        cout << "a lista está cheia \n";
    } else {
    shiftEnd(0);
    lista[0].preencher();
    }
}

void ListaContigua::insert(Produto p){
    if(!temEspaco()){
        cout << "a lista está cheia \n";
    } else {
    shiftEnd(0);
    lista[0].copiar(p);
    }
    quant++;
}

void ListaContigua::insert(int posicao){
    if(!temEspaco()){
        cout << "a lista está cheia \n";
    } else {
    shiftEnd(posicao);
    lista[posicao].preencher();
    }
    quant++;
}

void ListaContigua::remove(){
    if(!isEmpty()){
        shiftFront(0);
        quant--;
    }
}

void ListaContigua::remove(int posicao){
    if(!isEmpty()){
        shiftFront(posicao);
        quant--;
    }
}

void ListaContigua::imprimir() {
    cout << "\n Lista [ ";
    if (!isEmpty()) {
        for (int i = 0; i <= quant - 1; i++) {
            lista[i].imprimir();
        }
    }
    cout << " ]\n";
}

int ListaContigua::buscar(int id){
    for(int i = 0; i <= quant; i++){
        if(lista[i].getId() == id){
            return i;
        }
    }
    return -1;
}

void ListaContigua::insertionSort(){
    if (isEmpty() || quant == 1) {
        return;
    }
    for (int i = 1; i < quant; i++) {
        Produto chave = lista[i];
        int j = i - 1;

        while (j >= 0 && lista[j].getId() > chave.getId()){
            lista[j + 1].copiar(lista[j]);
            j--;
        }
        lista[j + 1].copiar(chave);
    }
}

void ListaContigua::ordenar(){
    insertionSort();
    cout << "a lista foi ordenada" << endl;
}

int ListaContigua::buscaBinaria(int id){
    int inicio = 0;
    int fim = tam - 1;
    int meio;
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        
        if (lista[meio].getId() == id)
            return meio;
        else if (id < lista[meio].getId()) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return -1;
}

void ListaContigua::shiftEnd(int ate){
    if (temEspaco() && !isEmpty()){
        for(int i = quant; i > ate; i--){
            lista[i].copiar(lista[i-1]);
        }
    }
}

void ListaContigua::shiftFront(int apartir){
    if (!isEmpty()){
        for(int i = apartir; i < quant - 2; i++){
            lista[i].copiar(lista[i+1]);
        }
    }
}

bool ListaContigua::temEspaco(){
    if(quant < tam){
        return true;
    } else
        return false;
}

bool ListaContigua::isEmpty(){
    if(quant == 0)
        return true;
    else
        return false;
}

void ListaContigua::setLista(Produto* lista) {
    this->lista = lista;
}

Produto* ListaContigua::getLista(){
    return lista;
}

void ListaContigua::setQuant(int quant){
    this->quant = quant;
}

int ListaContigua::getQuant(){
    return quant;
}

void ListaContigua::setTam(int tam){
    this->tam = tam;
}

int ListaContigua::getTam(){
    return tam;
}
