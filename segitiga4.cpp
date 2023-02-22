#include <iostream>
using namespace std;

int main(){

    int us;
    cout <<"masaukan angka perulangan  ";
    cin >> us;

    for(int i=0; i<us; i++){
        for(int j=0; j<i; j++){
            cout <<" ";
        }
        for(int k=us; k>i; k--){
            cout <<"*";
        }
        cout << endl;
    }

    return 0;
}