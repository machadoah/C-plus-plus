
#include <iostream>

using namespace std;

int main(){

    // FOR -> Para 
    // for (inicialização; condição; incremento){}

    int num;

    cout << "Insira o numero da tabuada, por favor: ";
    cin >> num;

    for (int i = 1; i <= 10; i++){
        cout << num << " x " << i << " = " << num * i << endl; 
    }

    // g++ <arquivo.cpp> -o <nome> --> compila
    // ./<nome> --> executa

    return 0;
}