#include "Produto.h"

using namespace std;

Produto::Produto(){
    id = -1;
    nome = "";
    valor = -1;
    preco = -1;
}

Produto::Produto(Produto &outro){
    id = outro.getId();
    nome = outro.getNome();
    valor = outro.getValor();
    preco = outro.getPreco();
}

void Produto::preencher(){
    cout << "--- Informe o produto ---\n";
    cout << "informe o id: \n";
    cin >> id;
    cout << "informe o nome: \n";
    cin >> nome;
    cout << "informe o valor: \n";
    cin >> valor;
    cout << "informe o preco: \n";
    cin >> preco;
}

void Produto::imprimir(){
    cout << "{"<< id << ", " 
            << nome << ", "
            << valor << ", "
            << preco << "}, ";
}

void Produto::copiar(Produto &outro){
    id = outro.getId();
    nome = outro.getNome();
    valor = outro.getValor();
    preco = outro.getPreco();
}

void Produto::setId(int id) {
    this->id = id;
}

void Produto::setNome(string nome){
    this->nome = nome;
}

void Produto::setPreco(double preco){
    this->preco = preco;
}

void Produto::setValor(double valor){
    this->valor = valor;
}

int Produto::getId(){
    return id;
}

string Produto::getNome(){
    return nome;
}

double Produto::getPreco(){
    return preco;
}

double Produto::getValor(){
    return valor;
}