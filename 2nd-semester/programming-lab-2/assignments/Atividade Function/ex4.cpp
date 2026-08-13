#include <iostream>
using namespace std;

void reajuste (float sal,float tempo) // Calculo de reajuste de salario
{
    if(tempo < 10)
    {
        sal = sal * 1.10; // Calculo de reajuste (menos que 10 anos)
        cout << "Salario reajustado: " << sal << endl; // Imprime o resultado
    }else
    {   
        sal= sal * 1.15; // Calculo de reajuste (mais que 10 anos)
        cout << "Salario reajustado: " << sal << endl; // Imprime o resultado
    }
    cout << "\n\n";
}

int main() //Função principal
{
    float salario;
    float serv_time;

    cout << "Digite o salario: ";
    cin >> salario; 

    cout << "Digite o tempo de serviço em anos: ";
    cin >> serv_time;
    
    // Loop para entrada de tempo de serviço valida
    while(serv_time <= 0)
    {
        cout << "Tempo de serviço invalido, Digite novamente: ";
        cin >> serv_time;
    }

    // Chama a função para realizar o reajuste
    reajuste(salario,serv_time);

    return 0;
}