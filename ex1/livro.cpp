#include <iostream>
#include <string>

//e necessario incluir o arquivo .h ou seja o cabecalho.
#include "livro.h"

using namespace std;

    //declaração do construtor inicializando com os valores correspondentes (Lista de Inicialização de Membros).
    Livro::Livro(){ 
        this->titulo = "";
        this->autor = "";
        this->editora = "";
        this->paginas = 0;
    }

    //construtor de copia

    Livro::Livro(Livro &outro){
        this->titulo = outro.getTitulo();
        this->autor = outro.getAutor();
        this->editora = outro.getEditora();
        this->paginas = outro.getPaginas();
    }
    
    //Construtor preenchendo
    Livro::Livro(string titulo, string autor, string editora, int paginas){
        this->titulo = titulo;
        this->autor = autor;
        this->editora = editora;
        this->paginas = paginas;
    }

    //chama os metodos get para a obetencao de valores das propriedades dos atributos.
    string Livro :: getTitulo(){
        return titulo;
    }
    
    string Livro :: getAutor(){
        return autor;
    }

    string Livro :: getEditora(){
        return editora;
    }

    int Livro :: getPaginas(){
        return paginas;
    }

    //chama os metodos set, para definicao ou alteracao dos valores (modificadores)
    void Livro :: setTitulo(string titulo){
        this -> titulo = titulo;
    }
    
    void Livro :: setAutor(string autor){
        this -> titulo = titulo;
    }
    
    void Livro :: setEditora(string editora){
        this -> editora = editora;
    }
    
    void Livro :: setPaginas(int paginas){
        this -> paginas = paginas;
    }

    //outros metodos
    
    void Livro::imprimir(){
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Editora: " << editora << endl;
        cout << "Paginas: " << paginas << endl;
    }
    
    void Livro::preencher(){
        cout << "---------Dados do livro---------" << endl;
        cout << "titulo:";
        cin >> this -> titulo;
        cout << "autor:";
        cin >> this -> autor;
        cout << "editora";
        cin >> this -> editora;
        cout << "paginas";
        cin >> this -> paginas;
    }

    void Livro::copiar(Livro &outro){
        this -> titulo = outro.getTitulo();
        this -> autor = outro.getAutor();
        this -> editora = outro.getEditora();
        this -> paginas = outro.getPaginas();
    }