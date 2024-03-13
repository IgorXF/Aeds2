#include <iostream>
#include <string>

using namespace std;

class Livro {
	private:
    int id;
    double isbn;
		string titulo;
		string autor;
		string editora;
		int edicao;
    public: 
    Livro();
    Livro(const Livro &outro);
    
    void imprimir() const;
    void preencher();
    void imprimireduzido() const;
    void copiar(const Livro& outro);
    
    ///metodo Getters e Setters
    void setId(int id);
    int getId() const;
    void setIsbn(double isbn);
    double getIsbn() const;
    void setTitulo(string custo);
    string getTitulo() const;
    void setAutor(string autor);
    string getAutor() const;
    void setEditora(string editora);
    string getEditora() const;
    void setEdicao(int idicao);
    int getEdicao() const;
    
};