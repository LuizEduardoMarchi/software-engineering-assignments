#include <iostream>
using namespace std;

class Calculadora {
    private:
        double Valor;
    public:
        Calculadora(double valor = 0) { Valor = valor; };
        void setValor(double valor) { Valor = valor; }
        void print() { cout << "Resultado: " << Valor << endl; }

        // Operadores binarios.
        Calculadora operator+(Calculadora outroValor) { return Calculadora(Valor + outroValor.Valor); }
        Calculadora operator-(Calculadora outroValor) { return Calculadora(Valor - outroValor.Valor); }
        Calculadora operator*(Calculadora outroValor) { return Calculadora(Valor * outroValor.Valor); }
        Calculadora operator/(Calculadora outroValor) { return Calculadora(Valor / outroValor.Valor); }

        // Operadores unarios.
        Calculadora operator++() { 
            Valor++; 
            return Valor; 
        }
        Calculadora operator--() { 
            Valor--; 
            return Valor;
        }
};

int main(void) {
    Calculadora A, B, Resultado;

    double x, y;
    int opcao;
    bool continuar = true;

    while(continuar) {

        cout << "Valor A: ";
        cin >> x; 
        A.setValor(x);

        cout << "Valor B: ";
        cin >> y; 
        B.setValor(y);

        cout << "\n\n=== Menu Calculadora ===" << endl; 
        cout << "0- Sair.\n1- Soma.\n2- Subtracao.\n3- Multiplicacao.\n4- Divisao.\n5- Incremento.\n6- Decremento.\nOpcao:";
        cin >> opcao;

        switch(opcao) {
            case 0: continuar = false; break;
            case 1: Resultado = A + B; break;
            case 2: Resultado = A - B; break;
            case 3: Resultado = A * B; break;
            case 4: Resultado = A / B; break;
            case 5: Resultado = ++A; break;
            case 6: Resultado = --A; break;
            default: cout << "\n\nOpcao invalida!" << endl;
        }

        Resultado.print();
    }

    return 0;
}