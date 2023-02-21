#include <iostream>
using namespace std;

int main() {


    int us;

    cout <<"masukan angka perulangan ";
    cin >> us;
    for(int i=0; i < us; i++) {
        for(int j=us; j > i; j--){  
            cout <<"*";
        }
        cout << endl;
    }

    return 0;
}