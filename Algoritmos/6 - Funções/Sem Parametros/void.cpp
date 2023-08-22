#include <iostream>

using namespace std;

void mensagemInicio(){
    cout << "Bem vindo ao curso de C++" << endl;
}

void mensagemFim();

int main(){

    mensagemInicio();
    mensagemFim();

    return 0;
}

void mensagemFim(){
    cout << "Fim do programa" << endl;
}