#include <iostream>

using namespace std;

int soma(int numero1, int numero2){
    return (numero1 + numero2);
}

void printSoma(int numero1, int numero2){
    cout << soma(numero1, numero2) << endl;
}

int main(){

    int a, b;

    cout << "Bem vindo ao programa de soma de dois numeros inteiros" << endl;

    cout << "Digite o primeiro numero: ";
    cin >> a;

    cout << "Digite o segundo numero: ";
    cin >> b;

    printSoma(a, b);

    return 0;
}