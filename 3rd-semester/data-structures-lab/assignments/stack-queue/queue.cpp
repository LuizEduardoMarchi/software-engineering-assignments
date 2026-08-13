#include <iostream>
using namespace std;

bool QUEUE_EMPTY(int tamanho) // Funcao para verificar se a fila esta vazia
{
    if (tamanho == 0) // Verifica se a Fila esta vazia
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool QUEUE_FULL(int comprimento, int tamanho) // Funcao para verificar se a fila esta cheia
{
    if (tamanho == comprimento) // Verifica se a Fila esta cheia
    {
        return true;
    }
    else
    {
        return false;
    }
}

void ENQUEUE(int Q[], int &posicao_ultimo_elemento, int elemento, int comprimento, int &tamanho_fila) // Funcao para adicionar elementos
{
    if (QUEUE_FULL(comprimento, tamanho_fila)) // Chama a funcao para verificar se a fila esta cheia
    {
        cout << "\n\nErro! Fila cheia." << endl;
        cout << "\n";
    }
    else
    {
        Q[posicao_ultimo_elemento] = elemento; // Adiciona o elemento na fila

        tamanho_fila++;

        if (posicao_ultimo_elemento == comprimento - 1) // Verifica se esta no fim do vetor
        {
            posicao_ultimo_elemento = 0; // Volta para o inicio do vetor
        }
        else
        {
            posicao_ultimo_elemento++; // Apenas incrementa a posicao
        }

        cout << "\nElemento adicionado com sucesso!" << endl;
    }
}

void DEQUEUE(int Q[], int &inicio, int comprimento, int &tamanho_fila) // Funcao para retirar elementos
{
    if (QUEUE_EMPTY(tamanho_fila))
    {
        cout << "\n\nERRO! Fila vazia." << endl;
        cout << "\n";
    }
    else
    {
        int elemento = Q[inicio]; // (Elemento do inicio da fila)

        if (inicio == comprimento - 1) // Verifica se a posicao inicial esta no fim do vetor
        {
            inicio = 0; // inicio passa a ser o inicio do vetor
        }
        else
        {
            inicio++; // Inicio passa a ser a proxima posicao no vetor
        }

        tamanho_fila--;

        cout << "\nElemento retirado da fila: " << elemento;
    }
}

void MOSTRA_VETOR (int vetor[], int inicio_fila, int tamanho_fila, int comprimento) // Funcao para exibir os elementos do vetor
{
    if (QUEUE_EMPTY(tamanho_fila)) // Verifica se a fila esta vazia
    {
        cout << "\n\nERRO! Insira um valor primeiro antes de mostrar o vetor." << endl;
    }
    else
    {
        cout << "Vetor: ";

        // Loop para exibir a fila
        for (int i = 0; i < tamanho_fila; i++)
        {
            cout << vetor[inicio_fila] << ", ";

            if (inicio_fila == comprimento - 1)
            {
                inicio_fila = 0;
            }
            else
            {  
                inicio_fila++;
            }
        }

        cout << "\n" << endl;
    }         
}

int main (void) // Funcao principal
{
    int tamanho_vetor;

    cout << "\n\nDigite o tamanho do vetor: ";
    cin >> tamanho_vetor;

    int opcao;
    bool continuar;

    int elemento;
    int vetor[tamanho_vetor];
    int fim_fila = 0, inicio_fila = 0;
    int tamanho_fila = 0;

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

            ENQUEUE(vetor, fim_fila, elemento, tamanho_vetor, tamanho_fila);
            
            break;
        case 2:
            DEQUEUE(vetor, inicio_fila, tamanho_vetor, tamanho_fila);
            break;
        case 3:
            MOSTRA_VETOR(vetor, inicio_fila, tamanho_fila, tamanho_vetor);
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