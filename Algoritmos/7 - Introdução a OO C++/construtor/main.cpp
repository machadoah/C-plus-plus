#include <iostream>
#include "Aluno.h"

using namespace std;

int main(){

    Aluno aluno1;

    aluno1.setNome("Antonio");
    aluno1.setRegistroAcademico(123456);
    aluno1.setCurso("Analise e Desenvolvimento de Sistemas");

    aluno1.imprimirDados();

    cout << endl;

    Aluno aluno2("Joao", 654321, "Ciencia da Computacao");

    aluno2.imprimirDados();

    return 0;
}