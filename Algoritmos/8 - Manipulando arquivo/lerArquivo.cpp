#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream input("arquivo.txt");

    for(string linha; getline(input, linha);){
        cout << linha << endl;
    }

    return 0;
}