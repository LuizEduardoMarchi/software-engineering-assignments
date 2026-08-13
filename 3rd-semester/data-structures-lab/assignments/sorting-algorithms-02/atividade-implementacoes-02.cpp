#include <iostream>
using namespace std;

// Contador global de trocas
int trocas = 0;

void intercala(int vetor[], int tam, int p, int q, int r) 
{
    int vet_aux[tam];

    for (int i = p; i <= q; i++) 
    {
        vet_aux[i] = vetor[i];
        trocas++;
    }

    for (int j = q + 1; j <= r; j++) 
    {
        vet_aux[r + q + 1 - j] = vetor[j];
        trocas++;
    }

    int i = p;
    int j = r;

    for (int k = p; k <= r; k++) 
    {
        if (vet_aux[i] <= vet_aux[j]) 
        {
            vetor[k] = vet_aux[i];
            i++;
        } 
        else 
        {
            vetor[k] = vet_aux[j];
            j--;
        }
        trocas++;
    }
}

void merge_sort(int vetor[], int tam, int p, int r) {
    if (p < r) 
    {
        int q = (p + r) / 2;
        merge_sort(vetor, tam, p, q);
        merge_sort(vetor, tam, q + 1, r);
        intercala(vetor, tam, p, q, r);
    }
}

int particiona(int vetor[], int p, int r) {
    int pivo = vetor[r];
    int i = p - 1;

    for (int j = p; j < r; j++) 
    {
        if (vetor[j] <= pivo) {
            i++;
            int aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            trocas += 3;
        }
    }
    int aux = vetor[i + 1];
    vetor[i + 1] = vetor[r];
    vetor[r] = aux;
    trocas += 3;
    return i + 1;
}

void quick_sort(int vetor[], int tam, int p, int r) {
    if (p < r) 
    {
        int q = particiona(vetor, p, r);
        quick_sort(vetor, tam, p, q - 1);
        quick_sort(vetor, tam, q + 1, r);
    }
}

int main(void) 
{
    int tam;

    cout << "Digite o tamanho do vetor: ";
    cin >> tam;

    int vetor[tam];
    for (int i = 0; i < tam; i++) 
    {
        cout << "Digite o " << i + 1 << "o Numero: ";
        cin >> vetor[i];
    }

    int opcao;
    cout << "\nEscolha:\n1-  Merge Sort\n2- Quick Sort\nOpcao: ";
    cin >> opcao;

    trocas = 0;

    if (opcao == 1) 
    {
        merge_sort(vetor, tam, 0, tam - 1);
        cout << "\nOrdenado via Merge Sort" << endl;
    } 
    else if (opcao == 2) 
    {
        quick_sort(vetor, tam, 0, tam - 1);
        cout << "\nOrdenado via Quick Sort" << endl;
    }
    else
    {
        cout << "Opcao invalida! Nenhuma ordenacao realizada." << endl;
        return 1;
    }

    cout << "Resultado: ";
    for (int i = 0; i < tam; i++)
    {
        cout << vetor[i];
        if (i < tam - 1) cout << ", ";
    }

    cout << "\nQuantidade final de trocas: " << trocas << endl;

    return 0;
}