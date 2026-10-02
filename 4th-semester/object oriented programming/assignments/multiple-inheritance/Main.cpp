#include <iostream>
#include "Pessoa.h"
#include "Funcionario.h"
#include "Professor.h"
#include "Coordenador.h"
#include "ProfessorCoordenador.h"
using namespace std;

int main(void)
{
    ProfessorCoordenador PC{"Pedro Jose", 29, 44433, "Robotica", 80, 4800, "Analise e desenvolvimento de sistemas", 16};

    PC.mostrarDados();

    return 0;
}