/*Construa um programa contendo uma função que receba como parâmetro dois vetores de
dez elementos inteiros positivos e mostre o vetor união dos dois primeiros.*/

#include <iostream>
using namespace std;

// Funcao para calcular a uniao dos vetores
int uniao(int veta[10], int vetb[10], int vetc[20]) 
{

    int posicao = 0;

    // Laço para copiar todos os valores do vetor A para o vetor C
    for (int i = 0; i < 10; i++) {
        vetc[posicao++] = veta[i];
    }

    // Laço para verificar se existe a uniao dos vetores B e C
    for (int i = 0; i < 10; i++) {
        bool existe = false;
        for (int j = 0; j < posicao; j++) {
            if (vetc[j] == vetb[i]) {
                existe = true;
                break;
            }
        }
        if (!existe) {
            vetc[posicao++] = vetb[i];
        }
    }

    // Retorna a posição do ultimo numero do vetor C
    return posicao; 
}

int main() {
    int vetA[10], vetB[10], vetC[20];
    int tamUniao;

    // Laço para coletar os valores do vetor A
    cout << "Preencha o vetor A:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "º numero do vetor A: ";
        cin >> vetA[i];
    }

    // Laço para coletar os valores do vetor B
    cout << "\nPreencha o vetor B:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "º numero do vetor B: ";
        cin >> vetB[i];
    }

    // Chama a funcao uniao e atribui o valor de retorno da funcao para a variavel tamanho uniao
    tamUniao = uniao(vetA, vetB, vetC);

    // Imprime os resultados
    cout << "\nVetor união: ";
    for (int i = 0; i < tamUniao; i++) {
        cout << vetC[i] << " ";
    }
    cout << endl;

    return 0;
}

