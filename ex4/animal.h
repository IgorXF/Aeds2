#include <iostream>
#include <string>

using namespace std;

class Animal{
private:
    string especie;
    string raca;
    int idade;
    float peso;

public:
    Animal();
    Animal(Animal &outro);
    Animal(string especie, string raca, int idade, float peso);

    //get
    string getEspecie();
    string getRaca();
    int getIdade();
    float getPeso();

    //set
    void setEspecie(string especie);
    void setRaca(string raca);
    void setIdade(int idade);
    void setPeso(float peso);

    // Outros métodos
    void imprimir();
    void preencher();
    void copiar(Animal &outro);
};


