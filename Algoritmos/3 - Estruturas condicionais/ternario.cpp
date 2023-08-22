#include <iostream>

using namespace std;

int main(){

    // Operador ternário
    // (condição) ? true : false

    int age = 0;
    
    do{

        cout << "Digite sua idade: ";
        cin >> age;
    
    } while (age < 0 || age > 150); // Validação de idade

    // Implementação do operador ternário
    
    string resultado = (age >= 18) ? "maior de idade" : "menor de idade";

    cout << "Uma pessoa com " << age << " eh " << resultado << endl;

    return 0;
}