#include <string>

using namespace std;

//cabecalho

class Livro{
    private:
        //atributos
        string titulo;
        string autor;
        string editora;
        int paginas;


    public:
        //construtor
        Livro();
        Livro(Livro &outro);
        Livro(string titulo, string autor, string editora, int paginas);
        
        //metodos(get, retornam os valores dos atributos de membro privados)
        string getTitulo();
        string getAutor();
        string getEditora();
        int getPaginas();

        //metodos(set, que apenas modificam valor e por isso não precisam ser retornados)
        void setTitulo(string titulo);
        void setAutor(string autor);
        void setEditora(string editora);
        void setPaginas(int paginas);

        // Outros métodos
        void imprimir();
        void preencher();
        void copiar(Livro &outro);
};