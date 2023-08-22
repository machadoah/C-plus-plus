// Classe Aluno

#include <iostream>

using namespace std;

class Aluno {

    public:

    // Atributos
    string nome;
    int registroAcademico;
    string curso;

    // Métodos
    void setNome(string nome){
        this->nome = nome;
    }

    void setRegistroAcademico(int registroAcademico){
        this->registroAcademico = registroAcademico;
    }

    void setCurso(string curso){
        this->curso = curso;
    }

    string getNome(){
        return nome;
    }

    int getRegistroAcademico(){
        return registroAcademico;
    }

    string getCurso(){
        return curso;
    }

    void imprimirDados(){
        cout << "Nome: " << getNome() << endl;
        cout << "Registro Acadêmico: " << getRegistroAcademico() << endl;
        cout << "Curso: " << getCurso() << endl;
    }
};