// Classe Aluno

#include <iostream>

using namespace std;

class Aluno {

    public:

        // Atributos
        string nome;
        int registroAcademico;
        string curso;

    // Construtor1
    Aluno(){
        cout << "Construtor chamado!" << endl;
    }

    // Construtor2
    Aluno(string nome, int registroAcademico, string curso){
        this->nome = nome;
        this->registroAcademico = registroAcademico;
        this->curso = curso;
    }

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
        cout << "Registro Academico: " << getRegistroAcademico() << endl;
        cout << "Curso: " << getCurso() << endl;
    }
};