#include "ListaContigua.h"
#include "ContadorTempo.h"
#include<iostream>
#include <fstream>

using namespace std;

ListaContigua::ListaContigua() {
    quant = 0;
    cout << "Informe o tamanho desejado:";
    cin >> tam;
    lista = new Cachorro[tam];
    contadorDeComparacoes = 0;
}

ListaContigua::ListaContigua(int tamanho) {
    quant = 0;
    tam = tamanho;
    lista = new Cachorro[tam];
    contadorDeComparacoes = 0;
}

ListaContigua::ListaContigua(const ListaContigua& outra) {
    quant = outra.getQuant();
    tam = outra.getTam();
    lista = outra.getLista();
}

ListaContigua::ListaContigua(const ListaContigua& outra, int novoTamanho) {
    quant = outra.getQuant();
    tam = novoTamanho;
    lista = new Cachorro[tam];

    for (int i = 0; i <= quant - 1; i++) {
        lista[i].copiar(outra.getLista()[i]);
    }
}

ListaContigua::~ListaContigua() {
    //será chamado quando o objeto for destruido
}

Cachorro ListaContigua::buscar(int id) {
    contadorDeComparacoes = 0;
    for (int i = 0; i <= tam - 1; i++) {
        if (lista[i].getCod() == id)
            return lista[i];
        else
            contadorDeComparacoes++;
    }
    Cachorro c;
    return c;
}

/*
 Lembrando que, pare este método funcionar é necessário que a lista esteja ordenada.
 */
int ListaContigua::buscaBinaria(int codigoProcurado) {
    contadorDeComparacoes = 0;
    int inicio = 0;
    int fim = tam - 1;
    int meio;
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        contadorDeComparacoes++;

        if (lista[meio].getCod() == codigoProcurado)
            return meio;
        else if (codigoProcurado < lista[meio].getCod()) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return -1;
}

void ListaContigua::preencher() {
    for (int i = 0; i <= tam; i++) {
        insert();
    }
}

void ListaContigua::insert() {
    if (!temEspaco()) {
        cout << "Operacao invalida. Lista cheia." << endl;
    } else {
        shiftEnd(0);
        lista[0].fill();
        quant++;
    }
}

void ListaContigua::insert(int posicao) {
    if (!temEspaco()) {
        cout << "Operacao invalida. Lista cheia." << endl;
    } else if (!indiceValido(posicao) || posicao > quant) {
        cout << "Operacao invalida para a posicao escolhida." << endl;
    } else {//tudo ok, pode inserir!
        shiftEnd(posicao);
        lista[posicao].fill();
        quant++;
    }
}

void ListaContigua::insert(Cachorro c) {
    if (!temEspaco()) {
        cout << "Operacao invalida. Lista cheia." << endl;
    } else {
        shiftEnd(0);
        lista[0].copiar(c);
        quant++;
    }
}

void ListaContigua::remove() {
    if(isEmpty()){
        cout << "Lista vazia" << endl;
    } else{//tudo ok
        shiftFront(0);
        quant--;
    }
}

void ListaContigua::remove(int posicao) {
   if(isEmpty()){
        cout << "Lista vazia" << endl;
    }else if(!indiceValido(posicao) || posicao >= quant){
        cout << "Operacao invalida para posicao escolhida.";
    }else{//tudo ok
        shiftFront(posicao);
        quant--;
    }
}

/**
 * <b>Atenção</b> pois so copiamos lista[i] = lista[i+1] até o penultimo, senao acessamos
 * memoria invalida
 * @param aPartir
 */
void ListaContigua::shiftFront(int aPartir) {
    if (indiceValido(aPartir)) {
        if (!isEmpty()) {
            for (int i = aPartir; i <= quant-2; i++) {
                lista[i].copiar(lista[i + 1]);
            }
        }
    }
}

void ListaContigua::shiftEnd(int ate) {
    if (temEspaco() && !isEmpty()) {
        for (int i = quant; i > ate; i--) {
            //lista[i] = lista[i-1];
            lista[i].copiar(lista[i - 1]);
        }
    }
}

/**
 * quant tam e1 e2 e3 e4 e5 e6...
 */
void ListaContigua::loadLista() {
    ContadorTempo temp("Lendo Arquivo");

    string caminhoPasta = "teste20000.txt";
    //string caminhoPasta = "../../Softwares/mapas/" + nomePasta + "/teste.txt";
    ifstream arquivoLido;

    arquivoLido.open(caminhoPasta.c_str());
    int q;
    arquivoLido >> q;
    arquivoLido >> tam;
    this->lista = new Cachorro[this->tam];

    string nome, raca;
    int cod, idade;
    char sexo;
    Cachorro c;
    // while (!arquivoLido.eof()) {
    for (int i = 0; i < q; i++) {
        arquivoLido >> cod;
        arquivoLido >> nome;
        arquivoLido >> raca;
        arquivoLido >> idade;
        arquivoLido >> sexo;
        c.setCod(cod);
        c.setNome(nome);
        c.setRaca(raca);
        c.setIdade(idade);
        c.setSexo(sexo);

        this->insert(c);

    }

    arquivoLido.close();
    temp.stop();
}

void ListaContigua::saveLista() {
    ContadorTempo temp("Salvando arquivo");

    string caminhoPasta = "teste20000.txt";
    ofstream arquivoSalvo;
    arquivoSalvo.open(caminhoPasta.c_str());

    //preenchendo o arquivo
    arquivoSalvo << quant << "\n" << tam << "\n";
    for (int i = 0; i <= quant - 1; i++) {
        arquivoSalvo << this->lista[i].getCod()
                << " " << this->lista[i].getNome()
                << " " << this->lista[i].getRaca()
                << " " << this->lista[i].getIdade()
                << " " << this->lista[i].getSexo() << "\n";
    }
    arquivoSalvo << "\n";

    arquivoSalvo.close();
    temp.stop();
}

void ListaContigua::criarListaRandom() {
    Cachorro c;
    for (int i = 0; i <= this->tam - 1; i++) {
        c.fillRandom(i);
        this->insert(c);
        
    }
}

bool ListaContigua::indiceValido(int i) {
    if (i >= 0 && i <= tam)
        return true;
    else
        return false;
}

bool ListaContigua::temEspaco() {
    if (quant < tam)
        return true;
    else
        return false;
}

bool ListaContigua::isEmpty() {
    if (quant == 0)
        return true;
    else
        return false;
}

void ListaContigua::imprimir() {
    cout << "\n Lista [ ";
    if (!isEmpty()) {
        for (int i = 0; i <= quant - 1; i++) {
            lista[i].printReduzido();
        }
    }
    cout << " ]\n";
}

/**
 *  GETTERS E SETTERS 
 */
void ListaContigua::setLista(Cachorro* lista) {
    this->lista = lista;
}

Cachorro* ListaContigua::getLista() const {
    return lista;
}

void ListaContigua::setQuant(int quant) {
    this->quant = quant;
}

int ListaContigua::getQuant() const {
    return quant;
}

void ListaContigua::setTam(int tam) {
    this->tam = tam;
}

int ListaContigua::getTam() const {
    return tam;
}