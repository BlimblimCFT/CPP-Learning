#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "Digite um numero inicial: \n";
    cin >> n1;
    cout << "Digite o numero final: \n";
    cin >> n2;
    cout << "Os numeros pares entre " << n1 << " e " << n2 << " sao:" << endl;
    while(n1<=n2){
        if (n1%2==0)
        {
            cout << n1 << " ";
            n1++;
        }
        else
        n1++;
    }
    return 0;
}