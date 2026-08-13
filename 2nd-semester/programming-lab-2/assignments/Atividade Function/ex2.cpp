#include <iostream>
using namespace std;

void soma_bt (int n1, int n2) // Função para soma entre os numeros digitados pelo usuario
{
    int soma = 0;
    int menor = n1; // Varivel menor inicializada com o primeiro valor digitado pelo usuario
    int maior;

    // Faz o teste de qual é o menor e o maior numero
    if(menor > n2)
    {   
        menor = n2;
        maior = n1;
    }else
    {
        menor = n1;
        maior = n2;
    }
    
    // Faz a soma dos numeros entre o menor e o maior numero
    for (int i = menor + 1; i < maior; i++) {
        soma += i;
    }

    cout << "A soma final foi de: " << soma << endl; // Imprime os resultados
    cout << "\n\n";
}

int main() // Função principal
{
    int a,b;

    cout << "Digite o primeiro numero: ";
    cin >> a;

    cout << "Digite o segundo numero: ";
    cin >> b;

    // Chama a função soma_bt (soma between)
    soma_bt(a,b);

    return 0;
}