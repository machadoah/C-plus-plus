#include <iostream>

using namespace std;

int main(){

    /*
        Variáveis armazenam valores, por contrário, ponteiros armazenam endereços de memória.
    */

    // Variável
    int x = 10;

    // Imprimindo valor armazenado na variável
    cout << "Valor da variavel x: " << x << endl;

    // Imprimindo endereço de memória da variável
    cout << "Endereco de memoria de x: "<< &x << endl;

    // ------------------

    // Ponteiro

    // Declarando ponteiro
    int *ponteiro; 

    // Atribuindo endereço de memória da variável x ao ponteiro
    ponteiro = &x; 

    // Imprimindo o valor da variavel x atraves do ponteiro

    /*
        * -> operador de conteúdo (conteudo apontado por)
    */

    cout << "Valor da variavel x atraves do ponteiro: " << *ponteiro << endl;

    // Alterando o valor da variável x atraves do ponteiro
    *ponteiro = 40; 

    // Imprimindo o valor da variável x
    cout << "Valor da variavel x: " << x << endl;
    cout << "Valor da variavel x: " << *ponteiro << endl;
    cout << ponteiro;

    return 0;
}