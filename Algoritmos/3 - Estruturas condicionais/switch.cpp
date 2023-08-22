#include <iostream>

using namespace std;

int main(){

    int a = 4;

    switch (a){
        case 0:
            cout << "a = 0" << endl;
            break;
        case 1:
            cout << "a = 1" << endl;
            break;
        default:
            cout << "a = ?" << endl;
            break;
    }

    return 0;
}