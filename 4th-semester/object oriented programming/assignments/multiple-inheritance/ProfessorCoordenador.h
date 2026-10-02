#include <iostream>
using namespace std;

class ProfessorCoordenador: public Coordenador, Professor 
{
    public:
        ProfessorCoordenador
            (char* nome, int idade, // Atributos de Pessoa.
            int matricula, char* disciplina, // Atributos de Funcionario.
            int carga_horaria, float salario, // Atributos de Professor.
            char* curso , int qtd_prof_coord); // Atributos de Coordenador.

    // Metodo para mostrar os dados do Professor Coordenador.
    void mostrarDados();
};

ProfessorCoordenador::ProfessorCoordenador
        (char* nome, int idade, // Atributos de Pessoa.
        int matricula, char* disciplina, // Atributos de Funcionario.
        int carga_horaria, float salario, // Atributos de Professor.
        char* curso , int qtd_prof_coord): // Atributos de Coordenador.
    
    // Chama o construtor das classes professor, coordenador e Pessoa.
    Pessoa(nome, idade), // Construtor da clase Pessoa.
    Coordenador(curso, qtd_prof_coord, nome, idade, matricula, salario), // Construtor da clase Coordenador.
    Professor(disciplina, carga_horaria, nome, idade, matricula, salario) // Construtor da clase Professor.
{
    // Vazio.
}

// Metodo para mostrar os dados do professor.
void ProfessorCoordenador::mostrarDados()
{
    cout << "\n\n==== Professor ====" << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Idade: " << getIdade() << endl;
    cout << "Matricula: " << Coordenador::getMatricula() << endl;
    cout << "Disciplina: " << getDisciplina() << endl;
    cout << "Carga Horaria: " << getCargaHoraria() << endl;
    cout << "Salario: " << Coordenador::getSalario() << endl;
}