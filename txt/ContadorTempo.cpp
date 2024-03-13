/* 
 * File:   ContadorTempo.cpp
 * Author: jose
 * 
 * Created on September 7, 2018, 8:26 AM
 */

#include "ContadorTempo.h"

ContadorTempo::ContadorTempo(string nomeDoProcessamento) {
    this->nomeDoProcesso = nomeDoProcessamento;
    cout << "Inicio do processamento("<< nomeDoProcessamento <<")...\n";
    this->inicio = clock();
    this->fim = clock();
    this->tempoDecorrido = 0.0;
}

ContadorTempo::ContadorTempo(const ContadorTempo& outro) {
    this->inicio = outro.getInicio();
    this->fim = outro.getFim();
    this->tempoDecorrido = outro.getTempoDecorrido();
}


void ContadorTempo::reStart() {
    this->inicio = clock();
    this->fim = clock();
    this->tempoDecorrido = 0.0;
}

void ContadorTempo::stop() {
    this->fim = clock();
    this->tempoDecorrido = (double) (this->fim - this->inicio) / (double) (CLOCKS_PER_SEC / 1000.0);
    cout << "Tempo gasto("+ nomeDoProcesso+ "):" << tempoDecorrido << " milisegundos.\n";
}



ContadorTempo::~ContadorTempo() {
}

void ContadorTempo::setTempoDecorrido(double tDecorrido) {
    this->tempoDecorrido = tDecorrido;
}

double ContadorTempo::getTempoDecorrido() const {
    return tempoDecorrido;
}

void ContadorTempo::setFim(clock_t tFim) {
    this->fim = tFim;
}

clock_t ContadorTempo::getFim() const {
    return fim;
}

void ContadorTempo::setInicio(clock_t tInicio) {
    this->inicio = tInicio;
}

clock_t ContadorTempo::getInicio() const {
    return inicio;
}

