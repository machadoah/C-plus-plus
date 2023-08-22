
#include <iostream>

using namespace std;

int main(){

    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;
    
    // > IF
    // if (condição) {bloco de código}

    if(idade >= 18){
        cout << "Maior de idade" << endl;
    }

    // > IF ELSE
    // if (condição) {bloco de código }else {bloco de código}

    if(idade >= 18){
        cout << "Maior de idade" << endl;
    }else{
        cout << "Menor de idade" << endl;
    }

    // > IF ELSE IF
    // if (condição) {bloco de código }else if (condição) {bloco de código} else {bloco de código}

    if(idade <= 18 && idade >= 14){
        cout << "Voce provavelmente esta no ensino medio" << endl;
    }else if(idade >= 6 && idade <= 17){
        cout << "Voce provavelmente esta no ensino fundamental" << endl;
    }else{
        cout << "Voce provavelmente nao esta no ensino obrigatorio" << endl;
    }

    return 0;
}