#include <iostream>
#include <cstdlib> // Biblioteca com recursos do sistema operacional

using namespace std;

int quadrado(){
    int x = 5;

    return x * x;
}

int main(){

    cout << "O quadrado de 6 eh: " << quadrado() << endl;

    system("pause"); // Pausa o programa (Windows)
    system("cls"); // Limpa a tela do terminal (Windows)

    return 0;
}