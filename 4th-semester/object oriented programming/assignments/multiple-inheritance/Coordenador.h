#include <iostream>
#include <string.h>
using namespace std;

class Coordenador: public Funcionario
{
    private:
        char curso[100];
        int qtd_prof_coord;
    public:
        // Construtor.
        Coordenador
            (char* curso, int qtd_prof_coord, // Atributos de Coordenador.
            char* nome, int idade, // Atributos de Pessoa.
            int matricula, float salario); // Atributos de Funcionario.

        // Metodos/
        char* getCurso();
        int getQtd_Prof_coordenados();
};

// Construtor da classe Funcionario.
Coordenador::Coordenador
        (char* curso, int qtd_prof_coord, // Atributos de Coordenador.
        char* nome, int idade, // Atributos de Pessoa.
        int matricula, float salario): // Atributos de Funcionario.
    
    // Chama o construtor das classes Funcionario e Pessoa.
    Pessoa(nome, idade),
    Funcionario(matricula, salario, nome, idade)
{
    strcpy(this -> curso, curso);
    this -> qtd_prof_coord = qtd_prof_coord;
}

char* Coordenador::getCurso()
{
    return curso;
}

int Coordenador::getQtd_Prof_coordenados()
{
    return qtd_prof_coord;
}