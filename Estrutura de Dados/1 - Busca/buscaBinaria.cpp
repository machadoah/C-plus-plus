#include <iostream>
#define TAM 9

using namespace std;

int buscaBinaria(int vetor[], int valorProcurado, int *posicao){

    
    int esq = 0;
    int dir = TAM - 1;
    int meio;

    while(esq <= dir){

        meio = (esq + dir) / 2;

        if(valorProcurado == vetor[meio]){
            *posicao = meio;
            return 1;
        } 

        if(valorProcurado < vetor[meio]){
            dir = meio - 1;
        } else {
            esq = meio + 1;
        }
    }

    return -1;

}

int main(){

    int vetor[TAM] = {10,15,20,25,30,35,40,45,50};
    int valorProcurado;
    int posicao;
    

    cout << "Digite o valor a ser procurado: ";
    cin >> valorProcurado;

    for(int i = 0; i < TAM; i++){
        cout << vetor[i] << " ";
    }

    cout << endl;

    if(buscaBinaria(vetor, valorProcurado, &posicao) == 1) {
        cout << "Valor encontrado na posicao " << posicao << endl;
    } else {
        cout << "Valor nao encontrado" << endl;
    }
    
    return 0;
}