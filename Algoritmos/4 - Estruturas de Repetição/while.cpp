#include <iostream>

using namespace std;

int main(){

    // While representa enquanto
    // Enquanto a condição for verdadeira, o bloco de código será executado

    int index = 1;

    int numero;

    cout << "Digite um numero para a tabuada: ";
    cin >> numero;

    while(index <= 10){
        cout << numero << " x " << index << " = " << numero * index << endl;
        index++;
    }

    cout << endl << endl;

    index = 10;

    while(index >= 1){
        cout << numero << " x " << index << " = " << numero * index << endl;
        index--;
    }

    return 0;
}