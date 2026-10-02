#include <iostream>
#include <string.h>
using namespace std;

class Pessoa
{
    private:
        char nome[100];
        int idade;

    public:
        // Construtor.
        Pessoa (char *nome, int idade);
        // Metodos.
        char *getNome();
        int getIdade();
};

// Construtor inicializando o nome e a idade.
Pessoa::Pessoa(char *nome, int idade){
    // Copia diretamente o nome e idade para o atributo da classe.
    strcpy(this -> nome, nome);
    this -> idade = idade;
}

// Metodo para retornar o nome.
char* Pessoa::getNome(){
    return nome;
}

// Metodo para retornar a idade.
int Pessoa::getIdade(){
    return idade;
}