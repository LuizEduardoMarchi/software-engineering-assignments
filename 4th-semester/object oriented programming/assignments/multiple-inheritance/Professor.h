#include <iostream>
using namespace std;

class Professor: public Funcionario 
{
    private:
        char disciplina[50];
        int carga_horaria;
    public:  
        // Construtor.
        Professor
            (char* disciplina, int carga_horaria, // Atributos de Professor.
            char* nome, int idade, // Atributos de Pessoa.
            int matricula, float salario); // Atributos de Funcionario.    
        
        // Metodos.
        char* getDisciplina();
        int getCargaHoraria();
        
};

// Metodo para cadastrar o professor.
Professor::Professor
        (char* disciplina, int carga_horaria, // Atributos de Professor.
        char* nome, int idade, // Atributos de Pessoa.
        int matricula, float salario): // Atributos de Funcionario.

    // Construtores das classes Funcionario e Pessoa.
    Pessoa(nome, idade),
    Funcionario(matricula, salario, nome, idade)
{
    // Atribuicao direta de disciplina e carga horaria para a classe Professor.
    strcpy(this -> disciplina, disciplina);
    this -> carga_horaria = carga_horaria;
}

// Metodo que retorna um ponteiro da disciplina.
char* Professor::getDisciplina()
{
    return disciplina;
}

// Metodo para retornar a carga horaria.
int Professor::getCargaHoraria()
{
    return carga_horaria;
}