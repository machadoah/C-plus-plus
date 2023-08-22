
#include <iostream>

using namespace std;

int main(){

    bool x = true;
    bool y = false;

    if(y){ // if(y == true)
        cout << "y is true" << endl;
    } else {
        cout << "y is false" << endl;
    }

    if(x){ // if(x == true)
        cout << "x is true" << endl;
    } else if(!x) { // if(x == false)
        cout << "x is false" << endl;
    }

    return 0;
}