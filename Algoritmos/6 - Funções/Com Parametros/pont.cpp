#include <iostream>

using namespace std;

int aumentaCem(int a){
    a = a + 100;
    return a;
}

int somaCem(int *pont){
    *pont = *pont + 100;
    return *pont;
}

int main(){

    int a = 10;
    int *pont;

    pont = &a;

    cout << aumentaCem(a) << endl;

    cout << somaCem(&a) << endl;
    cout << somaCem(pont) << endl;
    

    return 0;
}