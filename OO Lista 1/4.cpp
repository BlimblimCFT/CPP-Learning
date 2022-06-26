#include <iostream>
using namespace std;

int main(){
    int n, ini=1, soma=0;
    cout << "Somatorio quadratico para 1 ate: \n";
    cin >> n;
    while (ini<=n)
    {
        soma += ini*ini;
        ini++;
    }
    cout << "O valor total da soma eh: " << soma;
}