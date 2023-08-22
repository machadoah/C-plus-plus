#include <iostream>

using namespace std;

int main(){

    // Do While representa faça enquanto

    int idade;

    do{
        cout << "Digite sua idade: ";
        cin >> idade;
    } while(idade < 0 || idade > 130);

    cout << "fim";

    return 0;
}