#include <iostream>//Inclusão de biblioteca
#include <iomanip>//Inclusão de biblioteca
#define VALOR_COMBUSTIVEL 6.24 // constante do preço do combustível

using namespace std;

int main() { //Função principal
    // Variáveis
    float odo_i, odo_f, litros, valort, lucro, consu_m;

    cout << "Digite a kilometragem inicial do veiculo: ";
    cin >> odo_i;

    cout << "Digite a kilometragem apos a rodagem: ";
    cin >> odo_f;

    cout << "Digite a quantidade de litros gastos no dia: ";
    cin >> litros;

    cout << "Digite o valor arrecadado ao final do dia: ";
    cin >> valort;

    // Cálculos
    consu_m = (odo_f - odo_i) / litros; // Km/L
    lucro = valort - (litros * VALOR_COMBUSTIVEL); // lucro líquido

    // Saída formatada
    cout << "O consumo medio do veiculo foi de: " << fixed << setprecision(2) << consu_m << " Km/L" << endl;
    cout << "O lucro total no final do dia foi de: R$ " << fixed << setprecision(2) << lucro << endl;

    return 0;
}
