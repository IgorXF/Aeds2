#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string cpasta = "produtos.txt";
    int id;
    string nome;
    float preco;
    ifstream arqvlido;
    arqvlido.open(cpasta.c_str());

    int i = 1;
    while (i <= 3)
    {
        arqvlido >> id;
        arqvlido >> nome;
        arqvlido >> preco;

        if (preco > 50)
        {
            cout << id << " - ";
            cout << nome << " - ";
            cout << preco << endl;
        }
        i++;
    }

    arqvlido.close();

    return 0;
}