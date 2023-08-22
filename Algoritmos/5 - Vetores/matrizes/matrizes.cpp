#include <iostream>

using namespace std;

int main(){

    int matriz[2][2];

    // atribuindo valores de forma manual
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    // percorrendo a matriz
    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 2; coluna++){

        }
    }

    // atribuindo valores de forma automática
    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 2; coluna++){
            cout << "Digite o valor da [" << linha << "][" << coluna << "]: ";
            cin >> matriz[linha][coluna];
        }
    }

    // imprimindo matriz
    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 2; coluna++){
            cout << matriz[linha][coluna] << " ";
        }
        cout << endl;
    }


    return 0;
}