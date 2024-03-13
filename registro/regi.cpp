#include <fstream>
#include <iostream>



using namespace std;

int main(){
    string cpasta = "registro.txt";
    
    ofstream arqvsalvo;
    arqvsalvo.open(cpasta.c_str());
    int  i = 1;
    int matricula;
    string nome;
    string curso;
    while(i != 0){
    
    cout << "Matricula: ";
    cin >>  matricula;
    
    cout << "Nome: ";
    cin >> nome;
    
    cout << "Curso: ";
    cin >> curso;

    arqvsalvo << matricula << " " << nome << " " << curso << endl;
    i++;
    cout << "quando acabar informe 0 para parar o programa!" << endl;
    cin >> i;
    }
    arqvsalvo.close();
    return 0;
}