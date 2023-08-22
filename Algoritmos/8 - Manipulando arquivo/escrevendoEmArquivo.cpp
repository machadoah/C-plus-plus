#include <iostream>
#include <fstream>

using namespace std;

int main(){

    // criando arquivo
    ofstream arquivo;

    // abrindo arquivo
    arquivo.open("arquivo.txt", ios::app);

    // escrevendo no arquivo
    arquivo << "Estou escrevendo aqui!!" << endl;

    // fechando arquivo
    arquivo.close();

    return 0;
}