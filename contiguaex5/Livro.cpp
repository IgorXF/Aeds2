#include "Livro.h"

using namespace std;

Livro::Livro() {
    id = -1;
    isbn = -1;
    titulo = "";
    autor = "";
    editora = "";
    edicao = -1;    
}

Livro::Livro(const Livro& outro){
    id = outro.getId();
    isbn = outro.getIsbn();
    titulo = outro.getTitulo();
    autor = outro.getAutor();
    editora = outro.getEditora();
    edicao = outro.getEdicao();
}

void Livro::preencher(){
    cout << "--- Informe o produto ---\n";
    cout << "Id: ";
    cin >> id;
    cout << "isbn: ";
    cin >> isbn;
    cout << "Titulo: ";
    cin >> titulo;    
    cout << "Autor: ";
    cin >> autor;
    cout << "Editora: ";
    cin >> editora;
    cout <<"Edicao: ";
    cin >> edicao;         
    cout << "--------------------------\n";
}

void Livro::imprimir() const{
    cout << "----- Produto -----\n";
    cout << "id:" <<id << endl;
    cout << "isnb:"<< isbn << endl;
    cout << "titulo:" << titulo << endl;
    cout << "autor:" << autor << endl;
    cout << "Editora:" << editora << endl;
    cout << "Edicao" << edicao << endl;
    cout << "--------------------\n";
}

void Livro::imprimireduzido() const{
    cout << "{" << id  << ", "
            << isbn << ", " 
            << titulo << ", "
            << autor << ", "
            << editora << ", "
            << edicao << "}, ";
}

void Livro::copiar(const Livro &outro){
    isbn = outro.getIsbn();
    titulo= outro.getTitulo();
    autor = outro.getAutor();
    editora = outro.getEditora();
    edicao = outro.getEdicao();
}

void Livro::setId(int id){
    this->id = id;
}

int Livro::getId() const{
    return id;
}

void Livro::setIsbn(double isbn) {
    this->isbn = isbn;
}

double Livro::getIsbn() const {
    return isbn;
}

void Livro::setTitulo(string titulo) {
    this->titulo = titulo;
}

string Livro::getTitulo() const {
    return titulo;
}

void Livro::setAutor(string autor) {
    this->autor = autor;
}

string Livro::getAutor() const {
    return autor;
}

void Livro::setEditora(string editora) {
    this->editora = editora;
}

string Livro::getEditora() const {
    return editora;
}

void Livro::setEdicao(int edicao) {
    this->edicao = edicao;
}

int Livro::getEdicao() const {
    return edicao;
}