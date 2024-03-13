#include <iostream>
#include <string>
#include "carro.h"

using namespace std;

bool verificarMotorizacaoAcimaDe1(Carro& carro){
    return carro.getMotorizacao() > 1.0;
}

void verificarMesmaMarca(Carro& c1, Carro& c2, Carro& c3){
    if(c1.getMarca() == c2.getMarca()) {
        cout << c1.getNome() << " e " << c2.getNome() << " pertencem a mesma marca: " << c1.getMarca() << endl;
    }
    if(c1.getMarca() == c3.getMarca()) {
        cout << c1.getNome() << " e " << c3.getNome() << " pertencem a mesma marca: " << c1.getMarca() << endl;
    }
    if(c2.getMarca() == c3.getMarca()) {
        cout << c2.getNome() << " e " << c3.getNome() << " pertencem a mesma marca: " << c2.getMarca() << endl;
    } else 
    cout << "nao ha marcas iguais" << endl;
}

float calcularPercentualCarroMaisCaro(Carro& c1, Carro& c2, Carro& c3){
    float maxValor = c1.getValor();
    if (c2.getValor() > maxValor) {
        maxValor = c2.getValor();
    }
    if (c3.getValor() > maxValor) {
        maxValor = c3.getValor();
    }

    float totalValorOutrosCarros = 0.0;
    
    if (c1.getValor() < maxValor) {
        totalValorOutrosCarros += c1.getValor();
    }
    if (c2.getValor() < maxValor) {
        totalValorOutrosCarros += c2.getValor();
    }
    if (c3.getValor() < maxValor) {
        totalValorOutrosCarros += c3.getValor();
    }

    return ((maxValor - totalValorOutrosCarros) / totalValorOutrosCarros) * -100.0;
}


int main(){
    Carro c1("Civic", "Honda", 1.8, "Prata", 80000);
    Carro c2("Gol", "VW", 1.6, "Cinza", 50000);
    Carro c3("Fusion", "Ford", 2.0, "Preto", 100000);

    cout << "Carros com motorizacao acima de 1.0:" << endl;
    if (verificarMotorizacaoAcimaDe1(c1)) {
        cout << "Nome: " << c1.getNome() << ", Motorizacao: " << c1.getMotorizacao() << endl;
    }
    if (verificarMotorizacaoAcimaDe1(c2)) {
        cout << "Nome: " << c2.getNome() << ", Motorizacao: " << c2.getMotorizacao() << endl;
    }
    if (verificarMotorizacaoAcimaDe1(c3)) {
        cout << "Nome: " << c3.getNome() << ", Motorizacao: " << c3.getMotorizacao() << endl;
    } else
        cout << "nenhum tem motorizacao acima de 1.0" << endl;
    
    verificarMesmaMarca(c1, c2, c3);

    float percentualMaisCaro = calcularPercentualCarroMaisCaro(c1, c2, c3);
    cout << "O carro mais caro tem " << percentualMaisCaro << "%  mais que os demais carros." << endl;

    return 0;
}
    
