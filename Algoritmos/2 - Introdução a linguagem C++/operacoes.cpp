#include <iostream>

using namespace std;

int main(){

    int num1;
    int num2;

    cout << "Forneca o primeiro numero: ";
    cin >> num1;

    cout << endl << "Forneca o segundo numero: ";
    cin >> num2;

    // Adição
    cout << endl << "A soma de " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;

    // Subtração
    cout << endl << "A operacao de " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;

    // Multiplicação
    cout << endl << "A operacao de " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;

    // Quociente
    cout << endl << "A operacao de " << num1 << " div " << num2 << " = " << ( num1 / num2) << endl;

    // Divisão
    cout << endl << "A operacao de " << num1 << " / " << num2 << " = " << ( ((double) num1) / num2) << endl;

    // Resto
    cout << endl << "A operacao de " << num1 << " mod " << num2 << " = " << ( num1 % num2) << endl;

    // Abs (Valor absoluto)
    cout << endl << "A operacao de " << num2 << " - " << num1 << " em modulo resulta em " << (abs(num2-num1) ) << endl;

    return 0;
}