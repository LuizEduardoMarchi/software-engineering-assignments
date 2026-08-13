#include <string.h>
#include <iostream>
#define tam 10
using namespace std;

// Definição da estrutura
struct pesquisa
{
    float salario;
    int idade;
    int n_filhos = 0;
    char sexo[10];
};
    

int main()
{
    pesquisa lista[tam]; // Vetor lista do tipo pesquisa
    float media_filhos = 0, media_sal_h = 0, media_sal_m = 0;
    int n_homens = 0, n_mulheres = 0;

    // Leitura das informações dos entrevistados
    for(int i = 0; i < tam; i++)
    {
        cout << "\nDigite o sexo (Masculino ou Feminino): ";
        _flushall();
        gets(lista[i].sexo);

        cout << "\nDigite sua idade: ";
        cin >> lista[i].idade;

        cout << "\nDigite o seu salario: ";
        cin >> lista[i].salario;

        cout << "\nDigite o numero de filhos: ";
        cin >> lista[i].n_filhos;
    }

    // Laço para calcular a media do salario dos homens
    for(int i = 0; i < tam; i++)
    {
        if(strcmpi(lista[i].sexo, "masculino") == 0)
        {
            media_sal_h += lista[i].salario;
            n_homens ++;
        }        
    }

    media_sal_h = media_sal_h / n_homens; // Media salarial dos homens

    // Laço para calcular a media do salario das mulheres
    for(int i = 0; i < tam; i++)
    {
        if(strcmpi(lista[i].sexo, "feminino") == 0)
        {
            media_sal_m += lista[i].salario;
            n_mulheres ++;
        }    
    }

    media_sal_m = media_sal_m / n_mulheres; // Media salarial das mulheres
    
    // Laço para calcular a media de filhos por pessoa
    for(int i = 0; i < tam; i++)
    {
      media_filhos += lista[i].n_filhos; 
    }

   media_filhos = media_filhos / tam;

   // Imprime os resultados da pesquisa
   cout << "\nA media salarial dos " << n_homens << " homens foram de: " << media_sal_h;
   cout << "\nA media salarial das " << n_mulheres << " mulheres foram de: " << media_sal_m;
   cout << "\nA media de filhos foi de " << media_filhos << " por pessoa!";
   cout << "\n";

   return 0;
}