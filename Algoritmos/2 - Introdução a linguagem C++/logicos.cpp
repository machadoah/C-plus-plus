#include <iostream>

using namespace std;

int main(){

    // Operadores logicos
    // && and
    // || or
    // ! not

    // na tabela verdade do and um valor só é verdeiro quando os dois são verdadeiros

    // na tabela verdade do or um valor só é falso quando os dois são falsos

    bool calculadora = false;
    bool celular = true;

/*
    cout << "Calculadora e celular: " << (calculadora && celular) << endl;
    cout << "Calculadora ou celular: " << (calculadora || celular) << endl;

*/
    cout << "Não calculadora: " << (!calculadora) << endl;
    return 0;
}