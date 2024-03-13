#include <iostream>
#include <string>

using namespace std;

class Bicicleta{
private:
    string marca;
    string modelo;
    float tamanhoq;
    float preco;

public:
    Bicicleta();
    Bicicleta(Bicicleta &outra);
    Bicicleta(string marca,string modelo, float tamanhoq, float preco);

    //get
    string getMarca();
    string getModelo();
    float getTamanhoq();
    float getPreco();

    //set
    void setMarca(string marca);
    void setModelo(string modelo);
    void setTamanhoq(float tamanhoq);
    void setPreco(float preco);

    //outros metodos
    void imprimir();
    void preencher();
    void copiar(Bicicleta &outra);
};


