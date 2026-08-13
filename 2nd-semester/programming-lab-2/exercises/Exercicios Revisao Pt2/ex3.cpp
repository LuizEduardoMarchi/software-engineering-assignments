#include <iostream>

using namespace std;

int main(){

    int cont=0,n1,n2,n3;
    float media_aluno, media_sala;

    do{
        cout << "Digite a primeira nota do aluno:";
        cin >> n1;

        cout << "Digite a segunda nota do aluno:";
        cin >> n2;

        cout << "Digite a terceira nota do aluno:";
        cin >> n3;

        media_aluno = (n1 + n2 + n3) / 3;
        media_sala += media_aluno;

        cout << "A media do aluno foi de:" << media_aluno <<endl;

        cont++;

    }while(cont <= 10);

    media_sala = media_sala / 10;

    cout << "A media da sala foi de:" << media_sala <<endl;

    return 0;
}


