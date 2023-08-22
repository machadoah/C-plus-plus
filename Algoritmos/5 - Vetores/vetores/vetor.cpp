#include <iostream>
#define TAM 5

using namespace std;

int main(){

    // Cria um vetor
    int v[TAM]; // é um vetor, com identificador v, que possui tamanho TAM = 5

    // Passa valores para o vetor
    v[0] = 8;
    v[1] = 9;
    v[2] = 8;
    v[3] = 9;
    v[4] = 5;

    // Incrementa o valor de cada posição do vetor
    for (int i = 0; i < TAM; i++){
        v[i] += 1; // v[i] = v[i] + 1;
    }

    // Imprime o vetor
    cout << "A nota: " << v[0] << endl;
    cout << "A nota: " << v[1] << endl;
    cout << "A nota: " << v[2] << endl;
    cout << "A nota: " << v[3] << endl;
    cout << "A nota: " << v[4] << endl;

    cout << endl << endl;

    // Imprime o vetor por laço
    for (int i = 0; i < TAM; i++){
        cout << "A " << i+1 << "a nota: " << v[i] << endl;
    }
    
    return 0;
}