#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string cpasta = "cachorro.txt";
    
    ofstream arqvsalvo;
    arqvsalvo.open(cpasta.c_str());
    int id;
    string nome;
    string sexo;
    int idade;
    cout << "informe o Id: " << endl;
    cin >> id;
    cout << "informe o Nome: " << endl;;
    cin >> nome;
    cout << "infome o Sexo: " << endl;
    cin >> sexo;
    cout << "informe a Idade: " << endl;
    cin >> idade;
    
    arqvsalvo << id << " " << nome << " " << sexo << " " << idade;
    arqvsalvo.close();
    return 0; 
}