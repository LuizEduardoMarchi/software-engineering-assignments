#include <iostream>
using namespace std;

// Classe Funcionario que herda pessoa usando virtual.
// Usei o virtual para evitar o problema de ter que cadastrar e mostrar o mesmo objeto duas vezes
// na instancia ProfessorCoordenador.
class Funcionario: virtual public Pessoa
{
    private:
        int matricula;
        float salario;
    public:
        // Construtor.
        Funcionario (int matricula, float salario, char* nome, int idade);
    
        // Metodos.
        int getMatricula();
        float getSalario();  
};

// Construtor para inicializar a matricula do funcionario.
Funcionario::Funcionario (int matricula, float salario, char* nome, int idade): // Atributos de Funcionario e Pessoa.
    
    // Inicializa o construtor da clasee Pessoa    
    Pessoa(nome, idade)
{
    // Copia diretamente a matricula para o atributo da classe.
    this -> matricula = matricula;
    this -> salario = salario;
}

// Metodo para retornar a matricula.
int Funcionario::getMatricula()
{
    return matricula;
}

// Metodo para retornar o salario.
float Funcionario::getSalario(){
    return salario;
}