#include <iostream>
#include <stdlib.h>
#define TAMANHO 10
using namespace std;

// Tipo primitivo geral.
typedef int item;

// Estrutura para armazenar o dado e o ponteiro para o proximo no.
typedef struct no
{
    item informacao;
    struct no *prox = NULL;
    bool vazio = true;
} Lista;

// Vetor de ponteiros para listas.
Lista *tabelaEncadeada;

// Vetor de inteiros.
int *tabelaLinear;

// Aloca um novo no para a lista encadeada.
Lista *aloca_no()
{
    Lista *ptr = (Lista *) malloc(sizeof(Lista));
    
    ptr->prox = NULL;
    ptr->vazio = false;

    return ptr;
}

// Aloca e inicializa a tabela de encadeamento fechado.
Lista *aloca_tabela_encadeada(int tamanho)
{
    // Aloca o vetor de ponteiros para listas.
    Lista *tabela = (Lista *) malloc(tamanho * sizeof(Lista));

    // Inicializa todos os elementos como vazios (NULL).
    for (int i = 0; i < tamanho; i++)
    {
        tabela[i].vazio = true;
        tabela[i].prox  = NULL;
    }

    return tabela;
}

// Aloca e inicializa a tabela de hashing linear.
int *aloca_tabela_linear(int tamanho)
{
    int *tabela = (int *) malloc(tamanho * sizeof(int));

    // -1 indica posicao vazia.
    for (int i = 0; i < tamanho; i++)
        tabela[i] = -1;

    return tabela;
}

// Retorna o indice de acordo ao valor.
int funcao_hash(item valor)
{
    return valor % TAMANHO;
}

// Insere um valor nas duas estruturas simultaneamente.
void insere()
{
    item valor;
    cout << "\nDigite o valor a ser inserido: ";
    cin >> valor;

    // Encadeamento Fechado
    int indice_enc = funcao_hash(valor);
    int colisoes_enc = 0;

    if (tabelaEncadeada[indice_enc].vazio)
    {
        tabelaEncadeada[indice_enc].informacao = valor;
        tabelaEncadeada[indice_enc].vazio = false;
    }
    else
    {
        colisoes_enc++;

        Lista *novo = aloca_no();
        novo->informacao = valor;
        novo->prox = tabelaEncadeada[indice_enc].prox ;
        tabelaEncadeada[indice_enc].prox = novo;
    }

    // Hashing Linear
    int indice_lin = funcao_hash(valor);
    int colisoes_lin = 0;

    while (tabelaLinear[indice_lin] != -1 && tabelaLinear[indice_lin] != -2)
    {
        colisoes_lin++;
        indice_lin = (indice_lin + 1) % TAMANHO;
    }

    tabelaLinear[indice_lin] = valor;


    cout << "\nValor " << valor << " inserido com sucesso!";
    cout << "\n  Colisoes no Encadeamento Fechado: " << colisoes_enc;
    cout << "\n  Colisoes no Hashing Linear: " << colisoes_lin;
}

// Retorna o numero de comparacoes realizadas.
int busca_encadeado(item valor)
{
    int indice = funcao_hash(valor);
    int comparacoes = 0;

    // Elemento vazio nao ha nada para buscar.
    if (tabelaEncadeada[indice].vazio)
    {
        return 0;
    }

    // Verifica o no raiz.
    comparacoes++;
    if (tabelaEncadeada[indice].informacao == valor)
    {
        return comparacoes;
    }
     
    // Percorre os nos encadeados.
    Lista *atual = tabelaEncadeada[indice].prox;
    while (atual != NULL)
    {
        comparacoes++;
        if (atual->informacao == valor)
        {
            return comparacoes;
        }
        atual = atual->prox;
    }

    return -comparacoes; // Negativo indica que nao encontrou.
}

// Retorna o numero de comparacoes realizadas
int busca_linear(item valor)
{
    int indice = funcao_hash(valor);
    int comparacoes = 0;
    int inicio = indice; // Guarda o indice inicial para detectar loop completo.

    while (tabelaLinear[indice] != -1)
    {
        // Ignora posicoes marcadas como removidas (-2).
        if (tabelaLinear[indice] != -2)
        {
            comparacoes++;
            if (tabelaLinear[indice] == valor)  // Encontrou o valor.
            {
                return comparacoes;
            }
        }

        indice = (indice + 1) % TAMANHO; // Avanca para a proxima posicao.

        // Percorreu a tabela inteira sem encontrar.
        if (indice == inicio)
        {
            break;
        }
    }

    return -comparacoes; // Negativo indica que nao encontrou.
}

// Realiza a busca nas duas estruturas simultaneamente.
void busca()
{
    item valor;
    cout << "\nDigite o valor a ser buscado: ";
    cin >> valor;

    int comp_enc = busca_encadeado(valor);
    int comp_lin = busca_linear(valor);

    bool encontrado_enc = (comp_enc > 0);
    bool encontrado_lin = (comp_lin > 0);

    // Deixa o numero de comparacoes sempre positivo para exibir.
    if (comp_enc < 0) 
    {
        comp_enc = -comp_enc;
    }
    if (comp_lin < 0)
    {
        comp_lin = -comp_lin;
    }

    // Encadeamento Fechado
    if (encontrado_enc)
    {
        cout << "\n  Encadeamento Fechado: Encontrado. \nComparacoes: " << comp_enc;
    }
    else
    {
        cout << "\n  Encadeamento Fechado: Nao encontrado. \nComparacoes: " << comp_enc;
    }

    // Hashing Linear
    if (comp_lin < 0)
    {
        comp_lin = -comp_lin;
    }

    if (encontrado_lin)
    {
        cout << "\n  Hashing Linear: Encontrado. \nComparacoes: " << comp_lin;
    }
    else
    {
        cout << "\n  Hashing Linear: Nao encontrado. \nComparacoes: " << comp_lin;
    }
}

// Remove um valor das duas estruturas simultaneamente.
void remove_valor()
{
    item valor;
    cout << "\nDigite o valor a ser removido: ";
    cin >> valor;

    // Encadeamento Fechado
    int  indice_enc  = funcao_hash(valor);
    bool removido_enc = false;

    // Verifica se possui um elemento na posicao indice_enc
    if (!tabelaEncadeada[indice_enc].vazio)
    {
        if (tabelaEncadeada[indice_enc].informacao == valor)
        {
            
            if (tabelaEncadeada[indice_enc].prox != NULL)
            {
                Lista *prox = tabelaEncadeada[indice_enc].prox;
                tabelaEncadeada[indice_enc].informacao = prox->informacao;
                tabelaEncadeada[indice_enc].prox = prox->prox;
                free(prox); // Libera o no que foi removido.
            }
            else
            {
                // Era o unico elemento: marca o elemento como vazio.
                tabelaEncadeada[indice_enc].vazio = true;
            }
            removido_enc = true;
        }
        else
        {
            // Procura nos nos encadeados apos o elemento raiz.
            Lista *atual = tabelaEncadeada[indice_enc].prox;
            Lista *anterior = NULL;

            while (atual != NULL)
            {
                if (atual->informacao == valor)
                {
                    if (anterior == NULL)
                    {
                        tabelaEncadeada[indice_enc].prox = atual->prox;
                    }
                    else
                    {
                        anterior->prox = atual->prox;
                    }

                    free(atual);
                    removido_enc = true;
                    break;
                }
                anterior = atual;
                atual = atual->prox;
            }
        }
    }

    // Hashing Linear
    int  indice_lin = funcao_hash(valor);
    bool removido_lin = false;
    int  inicio = indice_lin;

    while (tabelaLinear[indice_lin] != -1)
    {
        if (tabelaLinear[indice_lin] == valor)
        {
            tabelaLinear[indice_lin] = -2; // Marca como removido (tombstone).
            removido_lin = true;
            break;
        }

        indice_lin = (indice_lin + 1) % TAMANHO;

        if (indice_lin == inicio) // Percorreu a tabela inteira.
        {
            break;
        }
    }

    // Encadeamento Fechado
    if (removido_enc)
    {
        cout << "\nEncadeamento Fechado: Valor removido!";
    }
    else
    {
        cout << "\nEncadeamento Fechado: Valor nao encontrado.";
    }

    // Hashing Linear
    if (removido_lin)
    {
        cout << "\nHashing Linear: Valor removido!";
    }
    else
    {
        cout << "\nHashing Linear: Valor nao encontrado.";
    }
}

// Exibe todos os elementos da tabela de encadeamento fechado.
void encadeamento_fechado()
{
    cout << "\n\nHashing Encadeamento Fechado";

    // Laco para mostrar os elementos
    for (int i = 0; i < TAMANHO; i++)
    {
        cout << "\n  Elemento [" << i << "]: ";

        if (tabelaEncadeada[i].vazio) // Verifica se a posicao esta vazia.
        {
            cout << "vazio";
        }
        else
        {
            // Imprime o no raizt.
            cout << tabelaEncadeada[i].informacao;

            // Imprime os nos encadeados.
            Lista *atual = tabelaEncadeada[i].prox;
            while (atual != NULL)
            {
                cout << " -> " << atual->informacao;
                atual = atual->prox;
            }
        }
    }
}

// Exibe todos os elementos da tabela de hashing linear.
void encadeamento_linear()
{
    cout << "\n\nHashing Linear";

    // Loop para mostrar o vetor
    for (int i = 0; i < TAMANHO; i++)
    {
        cout << "\n  Indice [" << i << "]: ";

        if (tabelaLinear[i] == -1) // Verifica se esta vazio
        {
            cout << "vazio";
        } 
        else 
        {
            if (tabelaLinear[i] == -2) // Verifica se foi removido
            {
                cout << "removido";
            }
            else
            {
                cout << tabelaLinear[i];
            }
        }                      
    }
}

// Desaloca a memoria utilizada pelas estruturas.
void desaloca()
{
    // Desaloca cada lista do encadeamento fechado.
    for (int i = 0; i < TAMANHO; i++)
    {
        Lista *ptr = tabelaEncadeada[i].prox;
        while (ptr != NULL)
        {
            Lista *aux = ptr->prox;
            free(ptr);
            ptr = aux;
        }
    }
    free(tabelaEncadeada); // Libera o vetor de ponteiros.
    tabelaEncadeada = NULL;

    free(tabelaLinear);    // Libera o vetor da tabela linear.
    tabelaLinear = NULL;
}

int main(void) // Funcao Principal.
{
    // Inicializa as duas estruturas.
    tabelaEncadeada = aloca_tabela_encadeada(TAMANHO);
    tabelaLinear    = aloca_tabela_linear(TAMANHO);

    // Variaveis de controle.
    int opcao;
    bool continuar = true;

    // Loop de interface.
    while (continuar)
    {
        cout << "\n\nMenu Hash Linear e Fechado. \n1- Insercao. \n2- Busca. \n3- Remocao. \n4- Mostrar. \n5- Encerrar. \nOpcao: ";
        cin >> opcao;

        // Seleciona a opcao desejada.
        switch (opcao)
        {
        case 1: // Insere nas duas estruturas.
            insere();
            break;

        case 2: // Busca nas duas estruturas.
            busca();
            break;

        case 3: // Remove das duas estruturas.
            remove_valor();
            break;

        case 4: // Mostra uma das estruturas.
            cout << "\n\nEscolha a estrutura a ser exibida. \n1- Hashing Encadeamento Fechado. \n2- Hashing Linear. \nOpcao: ";
            cin >> opcao;

            switch (opcao)
            {
            case 1:
                encadeamento_fechado();
                break;
            case 2:
                encadeamento_linear();
                break;
            default:
                cout << "\nOpcao Invalida!";
                break;
            }
            break;

        case 5: // Encerra.
            continuar = false;
            break;

        default:
            cout << "\nOpcao Invalida!";
            break;
        }
    }

    cout << "\n\nEncerrando o programa!!\n";

    desaloca(); // Desaloca a memoria.
    return 0;
}