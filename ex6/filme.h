#include <iostream>
#include <string>

using namespace std;

class Filme{
private:
    string titulo;
    string diretor;
    float duracao;
    float preco;
public:
    Filme();
    Filme(Filme &outro);
    Filme(string titulo, string diretor, float duracao, float preco);

    //get
    string getTitulo();
    string getDiretor();
    float getDuracao();
    float getPreco();

    //set
    void setTitulo (string titulo);
    void setDiretor (string diretor);
    void setDuracao (float duracao);
    void setPreco (float preco);

    //metodos
    void imprimir();
    void preencher();
    void copiar(Filme &outro);
};

