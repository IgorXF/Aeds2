#include "casa.h"

using namespace std;

Casa::Casa(){
    this -> endereco = "";
    this -> area = 0.0;
    this -> quartos = 0;
    this -> preco = 0.0;
}

Casa::Casa(Casa &outra){
    this -> endereco = outra.getEndereco();
    this -> area = outra.getArea();
    this -> quartos = outra.getQuartos();
    this -> preco = outra.getPreco();
}

Casa::Casa(string endereco, float area, int quartos, float preco){
    this -> endereco = endereco;
    this -> area = area;
    this -> quartos = quartos;
    this -> preco = preco;
}

string Casa::getEndereco(){
    return endereco;
}

float Casa::getArea(){
    return area;
}

int Casa::getQuartos(){
    return quartos;
}

float Casa::getPreco(){
    return preco;
}

void Casa::setEndereco(string endereco){
    this -> endereco = endereco;
}

void Casa::setArea(float area){
    this -> area = area;
}

void Casa::setQuartos(int quartos){
    this -> quartos = quartos;
}

void Casa::setPreco(float preco){
    this -> preco = preco;
}

void Casa::imprimir(){
    cout << "---------Dados da casa---------" << endl;
    cout << "Endereco: " << endereco << endl;
    cout << "Area: " << area << endl;
    cout << "Quartos: " << quartos << endl;
    cout << "Preco: " << preco << endl;
    cout << "------------------------------" << endl;
}
void Casa::preencher(){
    cout << "---------Dados da casa---------" << endl;
    cout << "endereco: ";
    cin >> this -> endereco;
    cout << "area: ";
    cin >> this -> area;
    cout << "quartos: ";
    cin >> this -> quartos;
    cout << "preco: ";
    cin >> this -> preco;
    cout << "------------------------------" << endl;
}

void Casa::copiar(Casa &outra){
    this -> endereco = outra.getEndereco();
    this -> area = outra.getArea();
    this -> quartos = outra.getQuartos();
    this -> preco = outra.getPreco();
}