#include <iostream>

using namespace std;

int quadrado(int numero){
    return (numero * numero);
}

int sucessor(int numero){
    return (numero + 1);
}

int main(){

    int numero;

    cout << "Digite qual numero voce deseja saber o quadrado: ";
    cin >> numero; // 5

    cout << "O quadrado de " << numero << " eh " << quadrado(numero) << endl; // 25

    cout << "O incremento do quadrado de " << numero << " eh " << sucessor(quadrado(numero)) << endl; // 26

    return 0;
}