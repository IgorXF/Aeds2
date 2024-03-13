#include <iostream>
#include <string>

using namespace std;

class Casa{
private:
    string endereco;
    float area;
    int quartos;
    float preco;
public:
    Casa(); //construtor
    Casa(Casa &outra); //
    Casa(string endereco, float area, int quartos, float preco);

    //get
    string getEndereco();
    float getArea();
    int getQuartos();
    float getPreco();

    //set
    void setEndereco (string endereco);
    void setArea (float area);
    void setQuartos (int quartos);
    void setPreco (float preco);

    // Outros métodos
    void imprimir();
    void preencher();
    void copiar(Casa &outra);

};
