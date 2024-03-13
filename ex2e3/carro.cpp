#include <iostream>
#include <string>
#include "carro.h"

using namespace std; 

Carro :: Carro(string nome, string marca, float motorizacao, string cor, float valor): nome(nome), marca(marca), motorizacao(motorizacao), cor(cor), valor(valor){}

string Carro :: getNome(){
    return nome;
}

string Carro :: getMarca(){
    return marca;
}

float Carro :: getMotorizacao(){
    return motorizacao;
}

string Carro :: getCor(){
    return cor;
}

float Carro :: getValor(){
    return valor;
}



void Carro:: setNome(string nome){
    this->nome = nome;
}

void Carro:: setMarca(string marca){
    this->marca = marca;
}

void Carro:: setMotorizacao(float motorizacao){
    this->motorizacao = motorizacao;
}

void Carro:: setCor(string cor){
    this->cor = cor;
}

void Carro:: setValor(float valor){
    this->valor = valor;
}


void Carro :: imprimir(){
    cout << "Nome: " << nome << endl;
    cout << "Marca: " << marca << endl;
    cout << "Motorização: " << motorizacao << endl;
    cout << "Cor: " << cor << endl;
    cout << "Valor: " << valor << endl;
}

void Carro :: preencher(string nome, string marca, float motorizacao, string cor, float valor){
    this -> nome = nome;
    this -> marca = marca;
    this -> motorizacao = motorizacao;
    this -> cor = cor;
    this -> valor = valor;
}

void Carro :: copia(Carro& outro){
    this -> nome = outro.nome;
    this -> marca = outro.marca;
    this -> motorizacao = outro.motorizacao;
    this -> cor = outro.cor;
    this -> valor = outro.valor;
}