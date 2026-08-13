#include <iostream>//Inclusão de biblioteca
#include <locale.h>//Inclusão de biblioteca

using namespace std;

int main(){ //Função Principal

    setlocale(LC_ALL,"portuguese");//Inclusão de bibliotecas de caracteres especiais

    //Area de variavel
    int indice;

    cout << "Digite o indice de pouluição:";
    cin >> indice;//Leitura de indice de poluição

    //Verifica qual é o tipo de poluição
    if(indice < 35){
        cout << "O indice de pouluição é agradavel!";
    }else if(indice >=35 && indice < 60){
        cout << "O indice de poluição é desagradavel!";
        }else{
            cout << "O indice de poluição é perigoso!";
            }

    return 0;
}
