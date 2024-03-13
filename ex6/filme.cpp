#include "filme.h"

using namespace std;

Filme::Filme(){
    string titulo = "";
    string diretor = "";
    float duracao = 0.0;
    float preco = 0.0;
}

Filme::Filme(Filme &outro){
    this -> titulo = outro.getTitulo();
    this -> diretor = outro.getDiretor();
    this -> duracao = outro.getDuracao();
    this -> preco = outro.getPreco();
}

Filme::Filme(string titulo, string diretor, float duracao, float preco){
    this -> titulo = titulo;
    this -> diretor = diretor;
    this -> duracao = duracao;
    this -> preco = preco;
}

string Filme::getTitulo(){
    return titulo;    
}

string Filme::getDiretor(){
    return diretor;
}

float Filme::getDuracao(){
    return duracao;
}

float Filme::getPreco(){
    return preco;
}

void Filme::setTitulo(string titulo){
    this -> titulo = titulo;
}

void Filme::setDiretor(string diretor){
    this -> diretor = diretor;
}

void Filme::setDuracao(float duracao){
    this -> duracao = duracao;
}

void Filme::setPreco(float preco){
    this -> preco = preco;
}

//outros metodos
    
void Filme::imprimir(){
    cout << "---------Dados do filme---------" << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Diretor: " << diretor << endl;
    cout << "Duracao: " << duracao << endl;
    cout << "Preco: " << preco << endl;
    cout << "                              " << endl;
    }
    
void Filme::preencher(){
    cout << "---------Dados do filme---------" << endl;
    cout << "Titulo: " << endl;;
    cin >> this -> titulo;
    cout << "Diretor: " << endl;;
    cin >> this -> diretor ;
    cout << "Duracao: " << endl;
    cin >> this -> duracao;
    cout << "Preco: " << endl;
    cin >> this -> preco;
    cout << "                              " << endl;
    }

void Filme::copiar(Filme &outro){
    this -> titulo = outro.getTitulo();
    this -> diretor = outro.getDiretor();
    this -> duracao = outro.getDuracao();
    this -> preco = outro.getPreco();
}