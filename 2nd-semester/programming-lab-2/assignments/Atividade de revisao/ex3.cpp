#include <iostream>//Inclusão de biblioteca
#define tam 10 //Contante de tamanho do vetor

using namespace std;

int main(){ //Função Principal

    //Area de variaveis
    int i,idade,peso;
    int idade_superior = 0
    int maior_peso = 0;

    //Laço de leitura de idade e peso
    for(i = 0; i < 10; i++){
        cout << "Digite a idade:";
        cin >> idade;

        cout << "Digite o peso:";
        cin >> peso;

        //Testa se a idade informada pelo usuario é maior que 50
        if(idade > 50){
            idade_superior += 1;//Contabiliza se a idade for maior que 50
        }
        //Testa se o peso informado pelo usuario é maior que 90
        if(peso > 90){
            maior_peso += 1;//Contabiliza se o peso for maior que 90
        }

    }

    //Imprime os resultados
    cout << "A quantidade de pessoas com mais de 50 anos foi de:" << idade_superior << endl;
    cout << "A quantidade de pessoas com mais de 90 Kg foi de:" << maior_peso << endl;

    return 0;
}
