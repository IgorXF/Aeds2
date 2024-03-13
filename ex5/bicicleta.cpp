#include "bicicleta.h"

using namespace std;

Bicicleta::Bicicleta(){
    this -> marca = "";
    this -> modelo = "";
    this -> tamanhoq = 0.0;
    this -> preco = 0.0;
}

Bicicleta::Bicicleta(Bicicleta &outra){
    this -> marca = outra.getMarca();
    this -> modelo = outra.getModelo();
    this -> tamanhoq = outra.getTamanhoq();
    this -> preco = outra.getPreco();
}

Bicicleta::Bicicleta(string marca,string modelo, float tamanhoq, float preco){
    this -> marca = marca;
    this -> modelo = modelo;
    this -> tamanhoq = tamanhoq;
    this -> preco = preco;
}

string Bicicleta::getMarca(){
    return marca;
}

string Bicicleta::getModelo(){
    return modelo;
}

float Bicicleta::getTamanhoq(){
    return tamanhoq;
}

float Bicicleta::getPreco(){
    return preco;
}

void Bicicleta::setMarca(string marca){
    this -> marca = marca;
}

void Bicicleta::setModelo(string modelo){
    this -> modelo = modelo;
}

void Bicicleta::setTamanhoq(float tamanhoq){
    this -> tamanhoq = tamanhoq;
}

void Bicicleta::setPreco(float preco){
    this -> preco = preco;
}

//outros metodos
    
void Bicicleta::imprimir(){
    cout << "---------Dados da bike---------" << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Tamanhoq: " << tamanhoq << endl;
    cout << "Preco: " << preco << endl;
    cout << "                              " << endl;
    }
    
void Bicicleta::preencher(){
    cout << "---------Dados da bike---------" << endl;
    cout << "Marca: " << endl;;
    cin >> this -> marca;
    cout << "Modelo: " << endl;;
    cin >> this -> modelo ;
    cout << "Tamanhoq: " << endl;
    cin >> this -> tamanhoq;
    cout << "Preco: " << endl;
    cin >> this -> preco;
    cout << "                              " << endl;
    }

void Bicicleta::copiar(Bicicleta &outro){
    this -> marca = outro.getMarca();
    this -> modelo = outro.getModelo();
    this -> tamanhoq = outro.getTamanhoq();
    this -> preco = outro.getPreco();
}