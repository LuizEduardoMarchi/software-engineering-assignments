#include <iostream>
#include <stdio.h>
using namespace std;

struct Produto // Struct para registro de produtos
{
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
};

void cadastrarProduto(Produto lista[], int &qtd)
{
    if (qtd >= 100) // Verifica se atingiu o maximo de cadastros permitidos
    {
        cout << "Limite maximo de produtos cadastrados atingido!!";
        cout << "Encerrando Cadastro!";
        return;
    }

    bool continuar = true;

    /// Laço para leitura dos dados do produto
    while (continuar)
    {
        cout << "\n\nDigite o codigo do produto: ";
        cin >> lista[qtd].codigo;

        cout << "Digite o nome do produto: ";
        fflush(stdin);
        gets(lista[qtd].nome);

        cout << "Digite o preco do produto: ";
        cin >> lista[qtd].preco;

        cout << "Digite a quantidade em estoque: ";
        cin >> lista[qtd].quantidade;

        qtd++;

        cout << "\nDeseja continuar cadastrando produtos? \n1 - Sim \n0 - Nao\n: ";
        cin >> continuar;
    }
}

void listarProdutos(Produto lista[], int qtd)
{
    // Laço para listar todos os produtos cadastrados
    for (int i = 0; i < qtd; i++)
    {
        cout << "\n"
             << i + 1 << char(248) << " Produto: " << endl;
        cout << "Codigo: " << lista[i].codigo << endl;
        cout << "Nome: " << lista[i].nome << endl;
        cout << "Preco: " << lista[i].preco << endl;
        cout << "Quantidade: " << lista[i].quantidade << endl;
    }
}

void buscarProduto(Produto lista[], int qtd, int codigo)
{
    bool encontrado = false; // Variavel de sistema para caso seja encontrado um produto

    // Laço para percorrer todos os produtos cadastrados
    for (int i = 0; i < qtd; i++)
    {
        if (lista[i].codigo == codigo) // Verifica se existe algum codigo igual ao cadastrado na posicao i
        {
            cout << "Produto encontrado!" << endl;
            cout << "Codigo: " << lista[i].codigo << endl;
            cout << "Nome: " << lista[i].nome << endl;
            cout << "Preco: " << lista[i].preco << endl;
            cout << "Quantidade: " << lista[i].quantidade << endl;

            encontrado = true; // Atribui verdadeiro para produto encontrado
        }
    }
    if (!encontrado) // Verifica se foi encotrado algum produto
    {
        cout << "\nCodigo invalido! Produto nao encontrado no sistema!\n\n";
    }
}

void excluirProduto(Produto lista[], int &qtd, int cod)
{
    // Variaveis de sistema
    bool deletado = false;
    bool opcao = true;

    // Laço para encontrar o produto que o usuario deseja deletar
    for (int i = 0; i < qtd; i++)
    {
        if (lista[i].codigo == cod)
        {
            cout << "Deseja mesmo deletar este produto?" << endl;
            cout << "Codigo: " << lista[i].codigo << endl;
            cout << "Nome: " << lista[i].nome << endl;
            cout << "Preco: " << lista[i].preco << endl;
            cout << "Quantidade: " << lista[i].quantidade << endl;
            cout << "Digite: \n1 - Sim \n0 - Nao \n: ";
            cin >> opcao;

            if (opcao)
            {
                lista[i] = lista[qtd - 1];
                qtd--;
                deletado = true;
            }
            return;
        }
    }

    if (!deletado) // Verifica se foi deletado algum produto no sistema
    {
        cout << "Erro! Produto nao encontrado" << endl;
    }
}

void salvarEmArquivo(Produto lista[], int qtd)
{
    FILE *estoque;                         // Ponteiro para o arquivo
    estoque = fopen("produtos.txt", "a+"); // funcao para abrir o arquivo e o modo de abertura

    if (!estoque) // Verifica se foi possivel abrir ou criar o arquivo
    {
        cout << "Erro ao abrir/criar arquivo!!";
        exit(1);
    }

    cout << "\nGravando registros no arquivo!!" << endl;

    // Loop para gravar todos os produtos do registro no arquivo
    for (int i = 0; i < qtd; i++)
    {
        fprintf(estoque, "%d;%s;%.2f;%d;\n", lista[i].codigo, lista[i].nome, lista[i].preco, lista[i].quantidade);
    }

    cout << "\nArquivos gravados com sucesso!\n\n";

    fclose(estoque); // Fecha o arquivo apos o uso
}

int main()
{
    int qtd = 0;        // Variavel contadora de quantos produtos foram cadastrados
    int opcao;          // Variavel para a opcao de menu digitada pelo usuario
    Produto Lista[100]; // Vetor de 100 posicoes de produto (struct)
    bool continuar = true;

    // Laço de menu
    while (continuar)
    {
        cout << "\nDigite uma opcao de navegacao!" << endl;
        cout << "1 - Cadastrar Produto \n2 - Listar Produtos \n3 - Buscar Produto \n4 - Excluir Produtos \n5 - Salvar no Arquivo \n0 - Encerrar Programa \n: ";
        cin >> opcao; // Faz a leitura da opcao de menu do usuario

        switch (opcao)
        {
        case 0: // Encera o programa

            cout << "\n\nEncerrando o sistema de cadastro de produtos...\n\n";
            return 0;
        case 1: // Cadastro de produto

            cadastrarProduto(Lista, qtd);
            break;

        case 2: // Lista todos os produtos cadastrados

            if (qtd <= 0) // Verifica se foi cadastrado ao menos um produto
            {
                cout << "\n\nERRO! Nao foram cadastrados nenhum produto" << endl;
                cout << "Nao sera possivel consultar produtos!!" << endl;
                break;
            }
            listarProdutos(Lista, qtd);
            break;

        case 3: // Pesquisa o produto por codigo

            if (qtd <= 0) // Verifica se foi cadastrado ao menos um produto
            {
                cout << "\n\nERRO! Nao foram cadastrados nenhum produto" << endl;
                cout << "Nao sera possivel buscar produtos!!" << endl;
                break;
            }
            int codigo;

            cout << "\nDigite o codigo do produto a ser buscado: ";
            cin >> codigo; // Faz a leitura do codigo do produto

            buscarProduto(Lista, qtd, codigo);
            break;

        case 4: // Deleta um produto por codigo

            if (qtd <= 0) // Verifica se foi cadastrado ao menos um produto
            {
                cout << "\n\nERRO! Nenhum produtos cadastrado!!" << endl;
                cout << "Nao sera possivel excluir produtos!!" << endl;
                break;
            }
            cout << "\nDigite o codigo do produto a ser deletado: ";
            cin >> codigo; // Faz a leitura do codigo do produto

            excluirProduto(Lista, qtd, codigo);

            break;
        case 5: // Faz a gravacao dos registros no arquivo

            if (qtd <= 0) // Verifica se foi cadastrado ao menos um produto
            {
                cout << "\n\nERRO!, Nao foram criados nenhum Registro" << endl;
                cout << "Nao sera possivel gravar o arquivo!!" << endl;
                break;
                ;
            }
            salvarEmArquivo(Lista, qtd);

            break;
        default: // Caso seja digitado valor fora do parametro

            cout << "\n\nOpcao Invalida!!\n";
            break;
        }
    }

    return 0;
}