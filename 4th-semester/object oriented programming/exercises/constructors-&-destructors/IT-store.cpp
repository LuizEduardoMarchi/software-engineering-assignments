#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

class Invoice
{
private:
    int codigo;
    char descricao[100];
    int quantidade;
    float preco;

public:
    // Construtor.
    Invoice(int novoCod, const char novaDesc[], int novaQtd, float novoPreco);

    // Setters.
    void setCodigo(int novoCod);
    void setDescricao(char novaDesc[]);
    void setQuantidade(int novaQtd);
    void setPreco(float novoPreco);

    // Getters.
    int getCodigo();
    char *getDescricao();
    int getQuantidade();
    float getPreco();

    // Metodo getInvoiceAmount (calculo da fatura).
    double getInvoiceAmount();
};

// Verificacoes e inicializacao do construtor.
Invoice::Invoice(int novoCod, const char novaDesc[], int novaQtd, float novoPreco)
{
    // Verifica se a quantidade eh negativa.
    if (novaQtd < 0)
    {
        cout << "\n\nQuantidade invalida!\n" << endl;
        quantidade = 0;
    }
    else
    {
        quantidade = novaQtd;
    }

    // Verifica se o preco eh negativo.
    if (novoPreco < 0)
    {
        cout << "\n\nPreco invalida!\n" << endl;
        preco = 0;
    }
    else
    {
        preco  = novoPreco;
    }

    // Copia da nova descricao.
    strcpy(descricao, novaDesc);

    // Copia do novo codigo.
    codigo = novoCod;

}

// Setters.
void Invoice::setCodigo(int novoCod)
{
    codigo = novoCod;
}

void Invoice::setDescricao(char novaDesc[])
{
    strcpy(descricao, novaDesc);
}

void Invoice::setQuantidade(int novaQtd)
{
    if (novaQtd < 0)
    {
        quantidade = 0;
    }
    else
    {
        quantidade = novaQtd;
    }
}

void Invoice::setPreco(float novoPreco)
{
    if (novoPreco < 0)
    {
        preco = 0;
    }
    else
    {
        preco = novoPreco;
    }
}

// Getters.
int Invoice::getCodigo()
{
    return codigo;
}

char *Invoice::getDescricao()
{
    return descricao;
}

int Invoice::getQuantidade()
{
    return quantidade;
}

float Invoice::getPreco()
{
    return preco;
}

double Invoice::getInvoiceAmount()
{
    return preco * quantidade;
}

int main(void)
{
    Invoice Fatura{1001, "Teclado", 3, 100.00};

    cout << "\n\n==== Fatura ====" << endl;
    cout << "Codigo: " << Fatura.getCodigo() << endl;
    cout << "Descricao: " << Fatura.getDescricao() << endl;
    cout << "Quantidade: " << Fatura.getQuantidade() << endl;
    cout << "Preco unidade: " << fixed << setprecision(2) <<Fatura.getPreco() << endl;
    cout << "Valor final Fatura: " << fixed << setprecision(2) << Fatura.getInvoiceAmount() << endl;

    return 0;
}