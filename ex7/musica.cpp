#include "musica.h"

using namespace std;

Musica::Musica(){
    string titulo = "";
    string artista = "";
    float duracao = 0.0;
    float preco = 0.0;
}

Musica::Musica(Musica &outra){
    this -> titulo = outra.getTitulo();
    this -> artista = outra.getArtista();
    this -> duracao = outra.getDuracao();
    this -> preco = outra.getPreco();
}

Musica::Musica(string título, string artista,float duraçao, float preço){
    this -> titulo = titulo;
    this -> artista = artista;
    this -> duracao = duracao;
    this -> preco = preco;
}

string Musica::getTitulo(){
    return titulo;    
}

string Musica::getArtista(){
    return artista;
}

float Musica::getDuracao(){
    return duracao;
}

float Musica::getPreco(){
    return preco;
}

void Musica::setTitulo(string titulo){
    this -> titulo = titulo;
}

void Musica::setArtista(string artista){
    this -> artista = artista;
}

void Musica::setDuracao(float duracao){
    this -> duracao = duracao;
}

void Musica::setPreco(float preco){
    this -> preco = preco;
}

//outros metodos
    
void Musica::imprimir(){
    cout << "---------Dados da musica---------" << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Artista: " << artista << endl;
    cout << "Duracao: " << duracao << endl;
    cout << "Preco: " << preco << endl;
    cout << "                              " << endl;
    }
    
void Musica::preencher(){
    cout << "---------Dados da musica---------" << endl;
    cout << "Titulo: " << endl;;
    cin >> this -> titulo;
    cout << "Artista: " << endl;;
    cin >> this -> artista;
    cout << "Duracao: " << endl;
    cin >> this -> duracao;
    cout << "Preco: " << endl;
    cin >> this -> preco;
    cout << "                              " << endl;
    }

void Musica::copiar(Musica &outro){
    this -> titulo = outro.getTitulo();
    this -> artista = outro.getArtista();
    this -> duracao = outro.getDuracao();
    this -> preco = outro.getPreco();
}