
#include "Cachorro.h"

Cachorro::Cachorro() {
    this->cod = -1;
    this->nome = "";
    this->raca = "vira_lata";
    this->idade = 0;
    this->sexo = 'f';
}

Cachorro::Cachorro(int cod, string nome, string raca, int idade, char s) {
    this->cod = cod;
    this->nome = nome;
    this->raca = raca;
    this->idade = idade;
    this->sexo = s;
}

/* Extremamente importante pois:
 * Na passagem de qualquer parametro ja é feito uma cópia
 * Por Default, o C++ passa o parametro de classe pelo endereco
 * Dai ele vai la no CONSTRUTOR Cao::Cao(const Cao& orig) e está vazio,
 * logo sua cópia fica "vazia" e portanto o metodo copiar copia um 
 * objeto vazio.
 * 
 * Verifique por meio de >>>>> DEBUGGGGGG <<<<<
 */
Cachorro::Cachorro(const Cachorro& outro) {
    this->cod = outro.getCod();
    this->nome = outro.getNome();
    this->raca = outro.getRaca();
    this->idade = outro.getIdade();
    this->sexo = outro.getSexo();
}

Cachorro::~Cachorro() {
}

/* Antes de fazer a cópia, o parametro ja é feito uma cópia
 * Por Default, o C++ passa o parametro de classe pelo endereco
 * Dai ele vai la no CONSTRUTOR Cao::Cao(const Cao& orig) e está vazio,
 * logo sua cópia fica "vazia" e portanto o metodo copiar copia um 
 * objeto vazio.
 */
void Cachorro::copiar(Cachorro cachorro) {
    this->cod = cachorro.getCod();
    this->nome = cachorro.getNome();
    this->raca = cachorro.getRaca();
    this->idade = cachorro.getIdade();
    this->sexo = cachorro.getSexo();
}

void Cachorro::fillRandom(int i){
    srand(i);
    this->cod = i;
    nome = "cao" + to_string(i);
    idade = rand() % 13;
    int sex = rand() % 2;
    if (sex == 0)
        sexo = 'm';
    else
        sexo = 'f';

    int racca = rand() % 6;
    if (racca == 0) {
        raca = "boxer";
    } else if (racca == 1) {
        raca = "doberman";
    } else if (racca == 2) {
        raca = "boagle";
    } else if (racca == 3) {
        raca = "pastor";
    } else if (racca == 4) {
        raca = "labrador";
    } else {
        raca = "rotweiler";
    }
}

void Cachorro::fill() {
    cout << "*********** Informe os dados do Cachorro **********************\n";
    cout << "Nome: ";
    cin >> this->nome;
    cout << "Raca: ";
    cin >> this->raca;
    cout << "Idade: ";
    cin >> this->idade;
    cout << "Sexo: ";
    cin >> this->sexo;
}

void Cachorro::print() {
    cout << "*********** Dados do Cachorro **********************\n";
    cout << "Cod:" << this->cod << endl;
    cout << "Nome: " << this->nome << endl;
    cout << "Raca: " << this->raca << endl;
    cout << "Idade: " << this->idade << endl;
    cout << "Sexo: " << this->sexo << endl;
}

void Cachorro::printReduzido() const{
    cout << "{"<< cod << ", " 
            << nome << ", "
            << raca << ", "
            << idade << ", "
            << sexo << "}, ";
}

void Cachorro::setCod(int cod) {
    this->cod = cod;
}

int Cachorro::getCod() const {
    return cod;
}

void Cachorro::setSexo(char sexo) {
    this->sexo = sexo;
}

char Cachorro::getSexo() const {
    return sexo;
}

void Cachorro::setIdade(int idade) {
    this->idade = idade;
}

int Cachorro::getIdade() const {
    return idade;
}

void Cachorro::setRaca(string raca) {
    this->raca = raca;
}

string Cachorro::getRaca() const {
    return raca;
}

void Cachorro::setNome(string nome) {
    this->nome = nome;
}

string Cachorro::getNome() const {
    return nome;
}

