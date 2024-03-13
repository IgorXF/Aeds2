/* 
 * File:   ContadorTempo.h
 * Author: jose
 *
 * Created on September 7, 2018, 8:26 AM
 */

#include <iostream>
#include <string.h>

using namespace std;

#ifndef CONTADORTEMPO_H
#define	CONTADORTEMPO_H

class ContadorTempo {
public:
    ContadorTempo(string nomeDoProcessamento);
    ContadorTempo(const ContadorTempo& outro);
    virtual ~ContadorTempo();
    
    void reStart();
    void stop();
    
    
    void setTempoDecorrido(double tDecorrido);
    double getTempoDecorrido() const;
    void setFim(clock_t tFim);
    clock_t getFim() const;
    void setInicio(clock_t tInicio);
    clock_t getInicio() const;
private:
    clock_t inicio, fim;
    double tempoDecorrido;
    string nomeDoProcesso;    
};

#endif	/* CONTADORTEMPO_H */

