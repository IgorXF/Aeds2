#include "animal.h"

using namespace std;

Animal::Animal(){
    this ->  especie = "";
    this -> raca = "";
    this -> idade = 0;
    this ->  peso = 0.0;
}

Animal::Animal(Animal &outro){
    this ->  especie = outro.getEspecie();
    this -> raca = outro.getRaca();
    this -> idade = outro.getIdade();
    this ->  peso = outro.getPeso();
}

Animal::Animal(string especie, string raca, int idade, float peso){
    this ->  especie = especie;
    this -> raca = raca;
    this -> idade = idade;
    this ->  peso = peso;
}

string Animal::getEspecie(){
    return especie;
}

string Animal::getRaca(){
    return raca;
}

int Animal::getIdade(){
    return idade;
}

float Animal::getPeso(){
    return peso;
}

void Animal::setEspecie(string especie){
    this -> especie = especie;
}

void Animal::setRaca(string raca){
    this -> raca = raca;
}

void Animal::setIdade(int idade){
    this -> idade = idade;
}

void Animal::setPeso(float peso){
    this -> peso = peso;
}


//outros metodos
    
void Animal::imprimir(){
    cout << "---------Dados do animal---------" << endl;
    cout << "Especie: " << especie << endl;
    cout << "Raca: " << raca << endl;
    cout << "Idade: " << idade << endl;
    cout << "Peso: " << peso << endl;
    cout << "                              " << endl;
    }
    
void Animal::preencher(){
    cout << "---------Dados do animal---------" << endl;
    cout << "especie: ";
    cin >> this -> especie;
    cout << "raca: ";
    cin >> this -> raca;
    cout << "idade: ";
    cin >> this -> idade;
    cout << "peso: ";
    cin >> this -> peso;
    cout << "                              " << endl;
    }

void Animal::copiar(Animal &outro){
    this -> especie = outro.getEspecie();
    this -> raca = outro.getRaca();
    this -> idade = outro.getIdade();
    this -> peso = outro.getPeso();
}