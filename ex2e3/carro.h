#include <string>

using namespace std;

class Carro{
    private:
        string nome;
        string marca;
        float motorizacao;
        string cor;
        float valor;
    
    public:
        Carro(string nome, string marca, float motorizacao, string cor, float valor); 
        //get
        string getNome();
        
        string getMarca();
        
        float getMotorizacao();
        
        string getCor();
        
        float getValor();

        //set
        void setNome(string nome);
        
        void setMarca(string marca);
        
        void setMotorizacao(float motorizacao);
        
        void setCor(string cor);
        
        void setValor(float valor);
        
        //imprime
        void imprimir();

        //preenche
        void preencher(string nome, string marca, float motorizacao, string cor, float valor);

        //copia
        void copia(Carro & carro);
};