#include <iostream>

using namespace std;

int main(){

    int tamanho;

    cout << "Digite a quantidade de notas: ";
    cin >> tamanho;

    int notas[tamanho];

    for(int i = 0; i < tamanho; i++){
        cout << "Digite a nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    double media = 0;

    // calculando a média das notas
    for(int i = 0; i < tamanho; i++){
        media += notas[i];
    }

    cout << "A media das notas eh: " << media / tamanho << endl;

    return 0;
}