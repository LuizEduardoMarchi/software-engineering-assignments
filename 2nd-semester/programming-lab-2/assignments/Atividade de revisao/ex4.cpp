#include <iostream>
#include <iomanip>

using namespace std;

int main() { //Função Principal

    // Declaração de variáveis
    int codigo_cliente, tipo_investimento;
    float valor_investido = 0;
    float total_investido_acumulado = 0;
    float total_juros_acumulado = 0;
    float rendimento_mensal = 0;

    // Loop principal para leitura dos dados
    do {
        // Leitura do código do cliente
        cout << "Digite o codigo do cliente (ou 0 para sair): ";
        cin >> codigo_cliente;

        // Condição de saída do loop
        if (codigo_cliente <= 0) {
            break;
        }

        // Leitura do tipo e valor do investimento
        cout << "Digite o tipo de investimento (1-Poupanca, 2-Poupanca Plus, 3-Fundos de Renda Fixa): ";
        cin >> tipo_investimento;

        cout << "Digite o valor do investimento: R$ ";
        cin >> valor_investido;

        // Estrutura switch para calcular o rendimento
        switch (tipo_investimento) {
            case 1:
                rendimento_mensal = valor_investido * 0.015;
                break;
            case 2:
                rendimento_mensal = valor_investido * 0.02;
                break;
            case 3:
                rendimento_mensal = valor_investido * 0.04;
                break;
            default:
                // Mensagem de erro para tipo de investimento inválido
                cout << "Tipo de investimento invalido. Por favor, tente novamente." << endl;
                rendimento_mensal = 0; // Zera o rendimento para não acumular
        }

        // Acumula os totais apenas se o tipo de investimento for válido
        if (tipo_investimento >= 1 && tipo_investimento <= 3) {
            total_investido_acumulado += valor_investido;
            total_juros_acumulado += rendimento_mensal;

            // Exibe o rendimento mensal para o cliente atual
            cout << "Rendimento mensal para este investimento: R$ " << rendimento_mensal << endl;
        }

        cout << endl; // Linha em branco para melhor visualização
    } while (true); // Loop infinito, a saída é controlada pelo break

    // Impressão dos resultados finais
    cout << "RELATORIO FINAL" << endl;
    cout << "Total investido: R$ " << fixed << setprecision(2) << total_investido_acumulado << endl;
    cout << "Total de juros pagos: R$ " << fixed << setprecision(2) << total_juros_acumulado << endl;

    return 0;
}
