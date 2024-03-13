#include <string>

using namespace std;

class Motor{
    private:
    
        string tipo;
        float potencia;
        float consumo;

    public:
    
    Motor(string tipo, float potencia, float consumo);

        string getTipo();
        float getPotencia();
        float getConsumo();

        void setTipo(string tipo);
        void setPotencia(float potencia);
        void setConsumo(float consumo);
};