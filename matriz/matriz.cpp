#include <iostream>
#include <fstream>

using namespace std;

void leitura(int l, int c, float **matriz, string nomearqv){
    ifstream arqvlido;
    string caminhop = nomearqv;
    arqvlido.open(caminhop);
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            arqvlido >> matriz[i][j];
        }
    }
    arqvlido.close();
}

void impressao(int l, int c, float **matriz){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    string nomearqv = "matriz.txt";
    int l = 4; // número de linhas
    int c = 5; // número de colunas
    float **matriz = new float *[l];
    for(int i = 0; i < l; i++){
        matriz[i] = new float[c];
    }
    
    leitura(l, c, matriz, nomearqv);
    impressao(l, c, matriz);
    
    for(int i = 0; i < l; i++){
        delete[] matriz[i];
    }
    delete[] matriz;
    
    return 0; 
}
