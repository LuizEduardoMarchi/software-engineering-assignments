#include <iostream>
using namespace std;

void capicua (int a) // Função capicua
{
    int und = a / 10; // Calculo do numero da unidade
    int dez = a % 10; // Calculo do numero da dezena
    
    // Verifica se a primeira e a segunda casa decimal são iguais
    if(und == dez )
    {
        cout << "E capicua!"; // Imprime o resultado
    }else
    {
        cout << "Nao e capicua"; // Imprime o resultado
        
    } 
    cout << "\n\n";   
}

int main() // Função principal
{
    int n;
    
    // Laço de leitura de um numero valido
    do
    {
        cout << "Digite um numero inteiro de dois digitos: ";
        cin >> n;

    }while(n < 10 && n > 99);
    
    // Chama a função capicua
    capicua(n);
    
    return 0;
}