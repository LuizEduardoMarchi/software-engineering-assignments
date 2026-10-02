#include <iostream>
#include <cstdlib>

using namespace std;

// Classe IntegerSet.
class IntegerSet
{
private:
    bool *ptr;
    int tamanho;

public:
    // Construtor.
    IntegerSet(int tamanho);
    // Destrutor.
    ~IntegerSet();
    // Metodos.
    void setNovoElemento(int elemento);
    void removerElemento(int elemento);
    void exibirElementos();
};

// Construtor da classe IntegerSet.
IntegerSet::IntegerSet(int n)
{
    tamanho = n;

    // Alocacao de memoria dinamica.
    ptr = (bool *) malloc(tamanho * sizeof(bool));

    // Inicializa o conjunto como vazio (0).
    for (int i = 0; i < tamanho; i++)
    {
        ptr[i] = 0;
    }
}

// Destrutor.
IntegerSet::~IntegerSet()
{
    free(ptr);
}

// Metodo para inserir um novo elemento no conjunto.
void IntegerSet::setNovoElemento(int elemento)
{
    if (elemento >= 0 && elemento < tamanho)
    {
        ptr[elemento] = 1;
    }
    else
    {
        cout << "Elemento " << elemento << " fora do intervalo permitido de 0 a " << tamanho - 1  << endl;
    }
}

// Metodo para retirar um elemento do conjunto.
void IntegerSet::removerElemento(int elemento)
{
    if (elemento >= 0 && elemento < tamanho)
    {
        ptr[elemento] = 0;
    }
    else
    {
        cout << "Elemento " << elemento << " fora do intervalo permitido de 0  " << tamanho - 1 << endl;
    }
}

// Metodo para exibir os elementos do conjunto.
void IntegerSet::exibirElementos()
{
    cout << "Elementos do conjunto: ";
    bool algumElemento = false;

    for (int i = 0; i < tamanho; i++)
    {
        if (ptr[i])
        {
            cout << i << " ";
            algumElemento = true;
        }
    }

    if (!algumElemento)
    {
        cout << "(conjunto vazio)";
    }

    cout << endl;
}

// Funcao principal.
int main(void)
{
    int n;

    cout << "Digite o valor maximo do conjunto: ";
    cin >> n;

    IntegerSet numeros(n);

    int opcao;
    int elemento;

    do
    {
        cout << "\n==== MENU ====" << endl;
        cout << "1 - Adicionar elemento" << endl;
        cout << "2 - Remover elemento" << endl;
        cout << "3 - Exibir elementos" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao)
        {
            case 1:
                cout << "Digite o elemento a adicionar: ";
                cin >> elemento;
                numeros.setNovoElemento(elemento);
                break;

            case 2:
                cout << "Digite o elemento a remover: ";
                cin >> elemento;
                numeros.removerElemento(elemento);
                break;

            case 3:
                numeros.exibirElementos();
                break;

            case 0:
                cout << "Encerrando o programa!" << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
                break;
        }

    } while (opcao != 0);

    return 0;
}
