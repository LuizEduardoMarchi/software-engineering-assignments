/*Faça um programa contendo uma função que receba como parâmetro a hora de início e a
hora de término de um jogo, ambas subdivididas em dois valores distintos: horas e
minutos. A função deverá retornar a duração expressa em minutos, considerando que o
tempo máximo de duração de um jogo é de duração de um jogo é de 24 horas e que ele
pode começar em um dia e terminar no outro.*/

#include <iostream>
using namespace std;


// Função minutos
int minutos (int hr_inicio, int min_inicio, int hr_fim, int min_fim)
{
    int inicio = hr_inicio * 60 + min_inicio;
    int fim = hr_fim * 60 + min_fim;
    
    // Verifica se o fim do jogo passou depois das 00:00
    if (fim < inicio) {
        fim += 24 * 60;
    }
    return fim - inicio;
}

int main(){ // Função Principal
    int hora_inicio, min_inicio;
    int hora_fim, min_fim;

    cout << "Digite a hora do comeco do jogo :";
    cin >> hora_inicio;
    
    cout << "Digite o minuto do comeco do jogo :";
    cin >> min_inicio;

    cout << "Digite a hora do fim do jogo :";
    cin >> hora_fim;
    
    cout << "Digite a minuto do fim do jogo :";
    cin >> min_fim;

    int duracao = minutos(hora_inicio, min_inicio, hora_fim, min_fim);

    // Valida se passou de 24h
    if (duracao > 24 * 60) {
        cout << "Duracao invalida! O jogo nao pode passar de 24 horas.\n";
    } else {
        cout << "A quantidade de minutos de jogo foi de: " << duracao << endl;
    }

    return 0;
}