#include <iostream>
#include <stdlib.h>
using namespace std;

// Tipo primitivo geral.
typedef int item;

// Struct para armazenar o dado e o ponteiro do proximo dado.
typedef struct no
{
    item informacao;
    struct no *proximo;
} lista;

// Ponteiro para o inicio da lista encadeada.
lista *comecoLista = NULL;

// Aloca memoria dinamicamente.
lista *aloca()
{
    lista *ponteiro;

    ponteiro = (lista *)malloc(sizeof(lista)); // Aloca memoria.

    return ponteiro; // Retorna o novo espaco na memoria.
}

// Verifica se a lista esta vazia.
bool vazio()
{
    if (comecoLista == NULL)
    {
        return true; // Lista vazia.
    }

    return false; // Lista com pelo menos um elemento.
}

// Faz a listagem de todos os elementos.
int listagem()
{
    // Verifica se a lista esta vazia.
    if (vazio())
    {
        cout << "\n\nERRO! Lista vazia. \nNao foi possivel listar os elementos!";
        return 1;
    }

    lista *ptr = comecoLista; // Copia do comeco da lista.

    // Laco para mostrar a lista completa.
    while (ptr != NULL)
    {
        cout << "\n\nPosicao de memoria: " << ptr << endl;
        cout << "Dado encontrado:    " << ptr->informacao << endl;
        cout << "Proximo endereco:   " << ptr->proximo << endl;
        ptr = ptr->proximo;
    }

    cout << "\nListagem feita com sucesso!";
    return 0;
}

// Busca por elemento.
int busca()
{
    // Loop para forcar o usuario a inserir um elemento na lista.
    if (vazio())
    {
        cout << "\n\nERRO! Lista vazia. \nInsira primeiro um elemento na lista.";
        return 1;
    }

    item busca = 0;

    cout << "Digite o elemento a ser buscado: ";
    cin >> busca;

    lista *ptr = comecoLista; // Copia do comeco da lista.

    // Busca o item na lista.
    while ((ptr != NULL) && (ptr->informacao != busca))
    {
        ptr = ptr->proximo;
    }

    // Verifica se o valor foi encontrado e exibe os resultados.
    if (ptr != NULL)
    {
        cout << "\n\nPosicao de memoria: " << ptr << endl;
        cout << "Dado encontrado:    " << ptr->informacao << endl;
        cout << "Proximo endereco:   " << ptr->proximo << endl;
    }
    else
    {
        cout << "\n\nElemento nao encontrado." << endl;
    }

    return 0;
}

void inserir_comeco(item numero)
{
    lista *ptr = aloca();
    ptr->informacao = numero;
    ptr->proximo = NULL;


    if (comecoLista == NULL)
    {
        comecoLista = ptr;
    }
    else
    {
        lista *aux = comecoLista;
        comecoLista = ptr;
        ptr->proximo = aux;
    }
}

void inserir_meio (item numero)
{
    lista *ptr = aloca();
    lista *ant;
    lista *atual = comecoLista;
    ptr->informacao = numero;
    ptr->proximo = NULL;

    int tamanho = 0;

    // Conta quantos elementos tem na lista.
    for (; atual->proximo != NULL; tamanho++)
    {
        atual = atual->proximo;
    }

    int meio = tamanho / 2;

    // Varre a lista ate encontrar o meio.
    atual = comecoLista;  
    for (int i = 0; i <= meio; i++)
    {
        ant = atual;
        atual = atual->proximo;
    } 

    ant->proximo = ptr;
    ptr->proximo = atual;
}

void inserir_final(item numero)
{
    // Aloca memoria.
    lista *ptr = aloca();
    ptr->informacao = numero;
    ptr->proximo = NULL;

    // Verifica se eh o primeiro elemento da lista.
    if (vazio())
    {
        comecoLista = ptr;
    }
    else
    {
        lista *atual = comecoLista; // Copia do comeco da lista

        // Percorre ate o fim da lista.
        while (atual->proximo != NULL)
        {
            atual = atual->proximo;
        }
        atual->proximo = ptr;
    }
}

// Insere elemento na lista.
bool inserir()
{
    item numero;
    int opcao;

    cout << "Digite um numero a ser inserido: ";
    cin >> numero;

    cout << "Escolha a forma de insercao na lista. \n1- Inicio. \n2- Meio. \n3- Fim. \nOpcao:";
    cin >> opcao;

    switch (opcao)
    {
    case 1:
        inserir_comeco(numero);
        break;
    case 2:
        inserir_meio(numero);
        break;
    case 3: 
        inserir_final(numero);
        break;
    default:
        cout << "numero invalido!";
        break;
    }

    return true;
}

// Retira determinado item da lista.
int retira()
{
    if (vazio())
    {
        cout << "\n\nERRO! Lista vazia. \nInsira primeiro um elemento na lista.";
        return 1;
    }

    item valor;
    
    cout << "Digite um numero a ser retirado: ";
    cin >> valor;

    lista *item_lista = comecoLista;
    lista *anterior = NULL;

    // Loop para busca do elemento.
    while (item_lista != NULL && item_lista->informacao != valor)
    {
        anterior = item_lista;
        item_lista = item_lista->proximo;
    }

    if (item_lista != NULL) // Verica se existe algum elemento inserido na lista.
    {
        if (anterior == NULL)
        {
            comecoLista = item_lista->proximo;
        }
        else
        {
            anterior->proximo = item_lista->proximo;
        }

        free(item_lista);

        cout << "\n\nElemento retirado com sucesso!\n";
        return 0;
    }

    // Exibe a mensagem quando nao foi possivel encontrar o elemento.
    cout << "\n\nElemento nao encontrado\n";
    return 1;
}

// Desaloca memoria utilizada por um item.
void destroi()
{
    lista *ptr = comecoLista; // Copia da lista
    lista *aux;
    // Libera completamente a memoria reservada para a lista.
    while (ptr != NULL)
    {
        aux = ptr->proximo; // Copia do proximo item.
        free(ptr);          // Desaloca o elemento atual;
        ptr = aux;          // Aponta para o proximo elemento;
    }

    comecoLista = NULL; // Reseta a lista para o ponto inicial
}

// Funcao principal.
int main(void)
{
    // Variaveis de controle.
    int opcao = 0; 
    bool continuar = true;

    do
    {
        cout << "\n\n======= Menu =======  " << endl;
        cout << "1- Verificar se a lista esta vazia. \n2- Listagem de elementos. \n3- Busca elementos. \n4- Inserir elemento. \n5- Retirar elemento. \n6- Sair." << endl;
        cout << "Opcao: ";
        cin >> opcao;

        // Estrutura de selecao de menu.
        switch (opcao)
        {
        case 1:
            if (vazio())
            {
                cout << "\nLista vazia!";
            }
            else
            {
                cout << "\nLista nao esta vazia!";
            }
            break;

        case 2:
            listagem();
            break;
        case 3:
            busca();
            break;
        case 4:
            inserir();
            break;
        case 5:
            retira();
            break;
        case 6:
            cout << "\n\nEncerrando o programa!!\n\n";

            continuar = false;

            break;
        default:
            cout << "\n\nOpcao invalida!"<< endl;

            break;
        }

    } while (continuar);

    destroi();         // Desaloca a memoria dos items da lista.
    free(comecoLista); // Desaloca o primeiro elemento da lista;

    return 0;
}