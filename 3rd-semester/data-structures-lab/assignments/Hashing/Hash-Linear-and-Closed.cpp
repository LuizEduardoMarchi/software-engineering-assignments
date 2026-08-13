#include <iostream>
#include <stdlib.h>
#define TAMANHO 10;
using namespace std;

// Tipo primitivo geral.
typedef int item;

// Estrutura para armazenar o dado e os ponteiros anterior e o proximo.
typedef struct no
{
    item informacao;
    struct no *prox = NULL;
} Lista;

// Ponteiro para guardar o comeco da lista.
Lista *comecoLista; 

// Aloca um novo no na lista encadeada.
Lista *aloca_no () 
{
    Lista *ptr = (Lista *) malloc(sizeof(Lista)); // Aloca memoria e cria um ponteiro.

    return ptr; // Retorna o ponteiro.
}

// Cria um ponteiro para guardar valores no vetor
int *aloca_vetor(int tamanho)
{
    int *ptr = (int *) malloc (tamanho * sizeof(int));

    return ptr; // Retorna o ponteiro.
}

void insere () // Funcao para inserir elementos.
{
    int numero;
    
    cout << "Digite um numero: ";
    cin >> numero;

    int colisoes = 0;


}

void busca () // Funcao para buscar um elemento.
{

}

void remove () // Funcao para remover um elemento.
{

}

void encadeamento_fechado () // Funcao para mostrar os elementos de Hashing Encadeamento Fechado.
{

}

void encadeamento_linear () // Funcao para mostrar os elementos de Hashing Linear.
{

}

void desaloca () // Funcao para desalocar a memoria utilizada pelo programa.
{
    Lista *ptr = comecoLista; // Copia da lista
    Lista *aux;
    // Libera completamente a memoria reservada para a lista.
    while (ptr != NULL)
    {
        aux = ptr->prox; // Copia do proximo item.
        free(ptr);          // Desaloca o elemento atual;
        ptr = aux;          // Aponta para o proximo elemento;
    }

    comecoLista = NULL; // Reseta a lista para o ponto inicial
}

int main(void) // Funcao principal.
{
    // Variaveis de controle.
    int opcao;
    bool continuar = true;

    // Loop de interface.
    while (continuar)
    {
        cout << "\n\n=== Menu Hash Linear e Fechado === \n1- Insercao. \n2- Busca. \n3- Remocao. \n4- Mostrar. \n5- Encerrar. \nOpcao: ";
        cin >> opcao;

        // Seleciona a opcao desejada.
        switch (opcao)
        {
        case 1: // Insere.
            insere();
            break;

        case 2: // Busca.
            busca();
            break;

        case 3: // Remove.
            remove();
            break;

        case 4: // Mostra.
            cout << "\n\n=== Escolha a estrutura a ser exibida === \n1- Hashing Encadeamento Fechado. \n2- Hashing linear. \nOpcao: ";
            cin >> opcao;
            
            // Seleciona a opcao desejada.
            switch (opcao)
            {
            case 1: // Hashing Encadeamento Fechado.
                encadeamento_fechado();
                break;

            case 2: // Hashing Linear.
                encadeamento_linear();
                break;

            default: // Opcao invalida.
                cout << "Opcao Invalida!";
                break;
            }
            break;

        case 5: // Encerra.
            continuar = false;
            break;
        
        default: // Opcao invalida.    
            cout << "Opcao Invalida!";
            break;
        }
    }

    cout << "\n\nEncerrando o programa!!\n";

    desaloca(); // Desaloca a memoria. 
    return 0;
}