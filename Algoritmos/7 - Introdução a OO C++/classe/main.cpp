#include <iostream>
#include "Aluno.h"

using namespace std;

int main(){

    Aluno aluno1;

    aluno1.setNome("Antonio");
    aluno1.setRegistroAcademico(123456);
    aluno1.setCurso("Analise e Desenvolvimento de Sistemas");

    aluno1.imprimirDados();

    return 0;
}