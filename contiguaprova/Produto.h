
#ifndef PRODUTO_H
#define	PRODUTO_H

#include <iostream>
#include <string.h>
using namespace std;

class Produto{
private:
    int id;
    string nome;
    double valor;
    double preco;

public:
    Produto();
    Produto(Produto &outro);

    void setId(int id);
    void setNome(string nome);
    void setValor(double valor);
    void setPreco(double preco);

    int getId();
    string getNome();
    double getValor();
    double getPreco();

    void imprimir();
    void preencher();
    void copiar(Produto &outro);
};

#endif	/* PRODUTO_H */