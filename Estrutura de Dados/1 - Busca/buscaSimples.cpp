#include <iostream>
#define TAM 10

using namespace std;

int buscaSimples(int vetor[], int valorProcurado, int *posicao){

    bool achou = false;

    for(int i = 0; i < TAM; i++){
        if(vetor[i] == valorProcurado){
            *posicao = i;
            achou = true;
        }
    }

    if(achou){
        return 1;
    } else {
        return -1;
    }
}

int main(){

    int vetor[TAM] = {55,44,33,22,11,66,77,88,99,00};
    int valorProcurado;
    int posicao;
    

    cout << "Digite o valor a ser procurado: ";
    cin >> valorProcurado;

    for(int i = 0; i < TAM; i++){
        cout << vetor[i] << " ";
    }

    cout << endl;

    if(buscaSimples(vetor, valorProcurado, &posicao) == 1) {
        cout << "Valor encontrado na posicao " << posicao << endl;
    } else {
        cout << "Valor nao encontrado" << endl;
    }
    
    return 0;
}