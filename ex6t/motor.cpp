#include <iostream>
#include <string>
#include "motor.h"
using namespace std;

    
Motor::Motor(string tipo, float potencia, float consumo): tipo(tipo), potencia(potencia), consumo(consumo){}

    
    string Motor :: getTipo(){
        return tipo;
    }

    float Motor :: getPotencia(){
        return potencia;
    }

    float Motor :: getConsumo(){
        return consumo;
    }


    void Motor :: setTipo(string tipo){
        this->tipo = tipo;
    }

    void Motor :: setPotencia(float potencia){
        this->potencia = potencia;
    }

    void Motor :: setConsumo(float consumo){
        this->consumo = consumo;
    }