#include <iostream>
using namespace std;

void antesdepois();
int numero;
int main(){
    cout << "Digite um numero:\n";
    cin >> numero;
    antesdepois();
    return 0;
}

void antesdepois(){
    cout << "O numero predecessor eh: " << numero-1 << endl;
    cout << "O numero sucessor eh: " << numero+1 << endl;
}