#include <iostream>

using namespace std;

int main(){

    // Variaveis são espaços na memória do computador que armazenam valores
    // <tipo> <identificador> = <valor>;

    // tipos de variáveis
    int inteiro = 10;
    float real = 10.5;
    double real2 = 10.5;
    char caractere = 'A';
    bool booleano = true;
    bool booleano2 = false;
    string texto = "Curso de Estrutura de Dados em C++";

    // impressão de variáveis
    /*
    %i - int
    %f - float e double
    %c - char
    %s - string
    %d - bool
    */

   printf("O valor da variável inteiro é: %i\n", inteiro);

    return 0;
}