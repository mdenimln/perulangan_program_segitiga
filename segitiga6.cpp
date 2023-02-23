#include <iostream>
using namespace std;

int main() {

    int us;
    cout <<"masukan angka perulangan  ";
    cin >> us;

     for(int i=1; i<=us; i++){
        for(int j=1; j<=i; j++){
            cout <<" ";
        }
        for(int k=us; k>=(2*i-us); k--){
            cout <<"*";
        }
        cout << endl;
    }
    

    return 0;
}