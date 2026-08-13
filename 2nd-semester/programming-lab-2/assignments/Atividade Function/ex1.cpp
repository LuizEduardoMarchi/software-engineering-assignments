#include <iostream>
using namespace std;

void milhas (float km) // Função para converter o valor de Km para Mph
{
    float milhas = 0;

    // Conversao de km para milhas
    milhas = km * 0.62;

    // Imprime os resultados
    cout << "\nA distancia " << km << " em milhas e: " << milhas << endl;
    cout << "\n\n";
}

int main() // Função principal
{
    float km = 0;

    cout << "Digite a distancia em quilometros: ";
    cin >> km;

    // Chama a função milhas para conversão
    milhas(km);
}
