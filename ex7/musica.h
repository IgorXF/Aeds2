#include <iostream>
#include <string>

using namespace std;

class Musica{
private:
    string titulo;
    string artista;
    float duracao;
    float preco;
public:
    Musica();
    Musica(Musica &outra);
    Musica(string titulo, string artista,float duraao, float preco);

    //get
    string getTitulo();
    string getArtista();
    float getDuracao();
    float getPreco();

    //set
    void setTitulo (string titulo);
    void setArtista (string artista);
    void setDuracao (float duracao);
    void setPreco (float preco);

    //metodos
    void imprimir();
    void preencher();
    void copiar(Musica &outra);
};
