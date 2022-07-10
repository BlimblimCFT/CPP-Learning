#include <iostream>
using namespace std;

int main(){
    int x, i, j, espaco;
    cout << "Digite um numero" << endl;
    cin >> x;
    for (i=1; i<=x; i++){
        for (espaco = x; espaco >= i; espaco--)
        cout << " ";
        for (j = 1; j<=i; j++){
            cout<< i << " ";
        }
        cout << "\n";
    }
}