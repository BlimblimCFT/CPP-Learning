#include <iostream>
using namespace std;

int main(){
    int n, ini=1, soma=0;
    while (cout << "Somatorio quadratico para 1 ate: \n" && (!(cin >> n) || n <=1))
    {
        cout << "O numero digitado nao eh um numero ou nao eh maior que 1!\n";
        cin.clear();
        cin.ignore();
    } 
    while (ini<=n)
    {
        soma += ini*ini;
        ini++;
    }
    cout << "O valor total da soma eh: " << soma;
}