#include <iostream>
#include <string.h>
#include <stdio.h>
#define tam 10
using namespace std;

class Veiculo {
    private:
        char placa[10];
        char marca[20];
        char modelo[50];

    public:
       virtual void setDados() {
            cout << "\n\n=== Cadastro Veiculo ===" << endl;
            cout << "Modelo: ";
            cin.ignore();
            cin.getline(modelo, 50);
            cout << "Marca: ";
            cin.getline(marca, 20);
            cout << "Placa: ";
            cin.getline(placa, 10);
       }
       virtual void getDados() {
            cout << "\n\n=== Veiculo ===" << endl;
            cout << "Modelo: " << modelo << endl;
            cout << "Marca: " << marca << endl;
            cout << "Placa: " << placa << endl;
       }

       virtual float calcularCusto() = 0;
};

class Carro: public Veiculo {
    private:
        float mensalidade;
    public:
        void setDados() {
            Veiculo::setDados();
            cout << "Valor mensal do aluguel: ";
            cin >> mensalidade;
        }

        void getDados() {
            Veiculo::getDados();
            cout << "Valor mensal: " << mensalidade;
        }

        float calcularCusto() {
            return mensalidade;
        }
};

class Caminhao: public Veiculo {
    private:
        float mensalidade;
        float taxa;
    public:
        void setDados() {
            Veiculo::setDados();
            cout << "Valor mensal do aluguel: ";
            cin >> mensalidade;
            cout << "Valor da taxa de transporte: ";
            cin >> taxa;
        }

        void getDados() {
            Veiculo::getDados();
            cout << "Valor mensal: " << calcularCusto();
        }

        float calcularCusto() {
            return mensalidade + taxa;
        }
};

class Motocicleta: public Veiculo {
    private:
        float diaria;
        int diasUtilizados;
    public:
        void setDados() {
            Veiculo::setDados();
            cout << "Valor da diaria: ";
            cin >> diaria;
            cout << "Dias trabalhados: ";
            cin >> diasUtilizados;
        }

        void getDados() {
            Veiculo::getDados();
            cout << "Valor final: " << calcularCusto();
        }

        float calcularCusto() {
            return diaria * diasUtilizados;
        }
};

int main(void) {
    Carro Car[tam];
    Caminhao Cam[tam];
    Motocicleta Mot[tam];

    // Indices (Carro, Caminhao, Motocicleta).
    int i = 0, j = 0, k = 0;

    bool continuar = true;
    int opcao, pos;

    while(continuar) {
        cout << "\n\n=== Menu Veiculos ===" << endl;
        cout << "1- Inserir Veiculo.\n2- Consultar Veiculos cadastrados.\n3- Custo Veiculo.\n4- Remover veiculo.\n5- Encerrar Programa.\nOpcao:";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "\n\n=== Inserir Veiculo ===" << endl;
                cout << "1- Carro.\n2- Caminhao.\n3- Motocicleta.\n4- Sair.\nOpcao: ";
                cin >> opcao;

                switch(opcao) {
                    case 1:
                        Car[i++].setDados();    
                        break;
                    case 2:
                        Cam[j++].setDados();  
                        break;
                    case 3:
                        Mot[k++].setDados();  
                        break;
                    case 4:
                        break;
                    default:
                        cout << "\n\nOpcao Invalida!" << endl;
                        continuar = true;
                }

                break;
            case 2:
                cout << "\n\n=== Consulta Veiculos ===" << endl;
                cout << "1- Carro.\n2- Caminhao.\n3- Motocicleta.\n4- Sair.\nOpcao: ";
                cin >> opcao;

                switch(opcao) {
                    case 1:
                        for (int h = 0; h < i; h++){
                            cout << "\nPosicao: " << h + 1;
                            Car[h].getDados();  
                        }
                        break;
                    case 2:
                        for (int h = 0; h < j; h++){
                            cout << "\nPosicao: " << h + 1;
                            Cam[h].getDados(); 
                        }
                        break;
                    case 3:
                        for (int h = 0; h < k; h++){
                            cout << "\nPosicao: " << h + 1;
                            Mot[h].getDados(); 
                        }    
                        break;
                    case 4:
                        break;
                    default:
                        cout << "\n\nOpcao Invalida!" << endl;
                        continuar = true;
                }
                
                break;
            case 3:
            {
                cout << "\n\n=== Custo Veiculo ===" << endl;
                cout << "1- Carro.\n2- Caminhao.\n3- Motocicleta.\n4- Sair.\nOpcao: ";
                cin >> opcao;

                if (opcao >= 1 && opcao <= 3)
                {
                    cout << "Posicao do veiculo: ";
                    cin >> pos;
                    pos--;

                    if (opcao == 1 && pos >= 0 && pos < i) {
                        cout << "\nCusto mensal: " << Car[pos].calcularCusto();
                    }
                    else if (opcao == 2 && pos >= 0 && pos < j) {
                        cout << "\nCusto mensal: " << Cam[pos].calcularCusto();
                    }    
                    else if (opcao == 3 && pos >= 0 && pos < k) {
                        cout << "\nCusto mensal: " << Mot[pos].calcularCusto();
                    }
                    else {
                        cout << "\n\nVeiculo nao encontrado!!" << endl;
                    }

                    break;
                }
            }
            case 4: {
                cout << "\n\n=== Remover Veiculo ===" << endl;
                cout << "1- Carro.\n2- Caminhao.\n3- Motocicleta.\n4- Sair.\nOpcao: ";
                cin >> opcao;

                if (opcao >= 1 && opcao <= 3) {
                    cout << "Posicao do veiculo: ";
                    cin >> pos;
                    pos--;

                    bool removido = false;

                    if (opcao == 1 && pos >= 0 && pos < i) {
                        for (int h = pos; h < i - 1; h++) {
                            Car[h] = Car[h + 1];
                        }

                        i--;
                        removido = true;
                            
                    } else if (opcao == 2 && pos >= 0 && pos < j) {
                        for (int h = pos; h < j - 1; h++){
                            Cam[h] = Cam[h + 1];
                        }

                        j--;
                        removido = true;

                    } else if (opcao == 3 && pos >= 0 && pos < k) {
                        for (int h = pos; h < k - 1; h++) {
                            Mot[h] = Mot[h + 1];
                        } 

                        k--;
                        removido = true;
                    }

                    if (removido) {
                        cout << "\n\nVeiculo removido com sucesso!" << endl;
                    }
                    else {
                        cout << "\n\nVeiculo nao encontrado!" << endl;
                    }
                } else if (opcao != 4) {
                    cout << "\n\nOpcao Invalida!" << endl;
                }

                break;
            }
            case 5:
                cout << "\n\nEncerrando programa..." << endl;
                continuar = false;
                break;
            default: 
                cout << "\n\nOpcao Invalida!" << endl;
                continuar = true;
            }
    }

    return 0;
}