/* 
 * File:   Cao.h
 * Author: jose
 *
 * Created on August 21, 2018, 9:41 AM
 */

#include <string.h>
#include <iostream>

using namespace std;

#ifndef CACHORRO_H
#define	CACHORRO_H

class Cachorro {
    
private:
    int cod;
    string nome;
    string raca;
    int idade;
    char sexo;
    
public:
    Cachorro();    
    Cachorro(int cod, string nome, string raca, int idade, char s);
    Cachorro(const Cachorro& outro);
    virtual ~Cachorro();        
    
    void copiar(Cachorro cachorro);
    void fill();
    void fillRandom(int i);
    void print();
    void printReduzido() const;
    
    
    void setCod(int cod);
    int getCod() const;
    void setSexo(char sexo);
    char getSexo() const;
    void setIdade(int idade);
    int getIdade() const;
    void setRaca(string raca);
    string getRaca() const;
    void setNome(string nome);
    string getNome() const;
    
};

#endif	/* CAO_H */

