#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

// Funcao para verificar e forçar a entrada do valor de compra valido
void verificar_valor(float &valor_compra)
{
    // Laço de entrada de dados validos
    while (valor_compra <= 0)
    {
        cout << "Erro! Valor Invalido." << endl;
        cout << "Digite o valor do produto novamente: ";
        cin >> valor_compra;
    }
}

// Funcao para verificar e forçar a entrada de uma porcentagem de desconto validos
void verificar_desconto(float &taxa)
{
    // Laço de entrada de dados validos
    while (taxa <= 0 || taxa > 100)
    {
        cout << "Erro! Taxa de desconto invalido." << endl;
        cout << "Digite a taxa de desconto novamente: ";
        cin >> taxa;
    }
}

// Funcao que faz o calculo do desconto da compra
void calculo_desconto(float &taxa, float &v_compras, float &valor_desconto)
{
    valor_desconto = float(v_compras * taxa) / 100;
}

// Funcao para mostrar os resultados
void mostrar_valores(float taxa, float v_compras, float valor_desconto)
{
    setlocale(LC_ALL, "portuguese");
    cout << "\n\nValor original: R$ " << fixed << setprecision(2) << v_compras << endl;
    cout << "Valor do desconto final de (" << taxa << "%): R$" << fixed << setprecision(2) << valor_desconto << endl;
    cout << "Valor final a ser pago: R$ " << fixed << setprecision(2) << v_compras - valor_desconto << endl;
    cout << "\n\n";
}

// Funcao principal
int main()
{
    int continuar;
    float taxa_desconto, valor_compras, valor_desconto;

    do
    {
        cout << "\n\n------CALCULADORA DE DESCONTOS------\n\n"
             << endl;

        cout << "Digite o valor da compra: ";
        cin >> valor_compras;

        verificar_valor(valor_compras); // Chama a funcao para verificar o valor

        cout << "Digite a taxa de desconto em %: ";
        cin >> taxa_desconto;

        verificar_desconto(taxa_desconto); // Chama a funcao para verificar o desconto

        calculo_desconto(taxa_desconto, valor_compras, valor_desconto); // Chama a funcao para calcular o desconto

        mostrar_valores(taxa_desconto, valor_compras, valor_desconto); // Chama a funcao para mostrar os resultados

        // Pergunta ao usuario se ele deseja realizar mais alguma operacao
        cout << "-----------Deseja continuar?------------" << endl;
        cout << "Digite um numero qualquer ou 1 para sair: ";
        cin >> continuar;

    } while (continuar != 1);

    return 0;
}