#include <iostream>
using namespace std;

bool STACK_EMPTY(int indice) // Funcao para verificar se a pilha esta vazia
{
    if (indice <= 0) // Verifica se existe algum elemento no topo da pilha
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool STACK_FULL (int indice, int tamanho_pilha) // Funcao para verificar se a pilha esta cheia
{
    if (indice >= tamanho_pilha) // Verifica se a pilha esta cheia
    {
        return true;
    }
    else
    {
        return false;
    }
}

void PUSH(int vetor[], int elemento, int &indice, int tamanho_pilha) // Funcao para adicionar elementos na pilha
{
    if (STACK_FULL(indice, tamanho_pilha)) // Verifica se a pilha esta cheia
    {
        cout << "\nERRO! Limite de elementos atingido." << endl;
    }
    else
    {
        vetor[indice++] = elemento;
    }
}

void POP(int vetor[], int &indice) // Funcao para remover elementos da pilha
{
    if (STACK_EMPTY(indice)) // Verifica se a pilha esta vazia
    {
        cout << "\nERRO! Pilha vazia." << endl;
    }
    else
    {
        int elemento = vetor[indice - 1];
        vetor[--indice] = 0;
        cout << "\nElemento retirado da pilha: " << elemento;
    }
}

void MOSTRA_VETOR(int vetor[], int indice) // Funcao para mostrar os elementos
{
    if (STACK_EMPTY(indice)) // Verifica se a fila esta vazia
    {
        cout << "\n\nERRO! Insira um valor primeiro antes de mostrar o vetor." << endl;
    }
    else
    {
        cout << "Vetor: ";

        // Loop de exibicao do vetor
        for (int j = 0; j < indice; j++)
        {
            cout << vetor[j] << ", ";
        }

        cout << "\n" << endl;
    }    
}

int main (void) // Funcao principal
{
    int tamanho_vetor;

    cout << "\n\nDigite o tamanho do vetor: ";
    cin >> tamanho_vetor;

    int vetor[tamanho_vetor];
    
    int opcao;
    bool continuar;

    int elemento;
    int indice = 0;

    // Loop de operacao
    do{
        cout << "\n\n----Digite a operacao----\n" << endl;
        cout << "1- Adicionar elementos\n2- Remover elementos\n3- Mostrar vetor\nOpcao: ";
        cin >> opcao;

        // Estrutura de escolha de operacao
        switch (opcao)
        {
        case 1:
            cout << "\nDigite o elemento a ser adicionado: ";
            cin >> elemento;

            PUSH(vetor, elemento, indice, tamanho_vetor);
            
            break;
        case 2:
            POP(vetor, indice);
            break;
        case 3:
            MOSTRA_VETOR(vetor, indice);
            break;
        default:
            cout << "\n\nERRO! Opcao Invalida." << endl;

        }

        cout << "\n\nDeseja continuar as operacoes?" << endl;
        cout << "1- Sim\n2- Nao\nOpcao: ";
        cin >> opcao;

        if (opcao == 1) // Verifica se o usuario deseja continuar
        {
            continuar = true;
        }
        else
        {
            continuar = false;
        }

    }while (continuar);

    cout << "\n\nPrograma Finalizado!\n";
    
    return 0;
}