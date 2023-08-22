#include <iostream>

using namespace std;

void printVetor(int *vetor, int tamanho){

    cout << "[ ";
    
    for(int i = 0; i < tamanho; i++){
        cout << vetor[i] << " ";
    }
    cout << " ]";
    cout << endl;
    
}

void modificaVetor(int *vetor, int tamanho) {

    for(int i = 0; i < tamanho; i++){
        cout << "Insira o novo valor para a posicaoo " << i << ": ";
        cin >> vetor[i];
    }
}

int main(){

    int vetor[] = {0, 1, 2, 3, 4};

    printVetor(vetor, 5);

    modificaVetor(vetor, 5);

    printVetor(vetor, 5);

    return 0;
}