#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAX = 40; // máximo de caracteres
    char str[MAX]; // variável tipo string

    cout << "Digite uma string(matriz de caracteres): "; // pede para o usuário digitar uma string

    cin >> setw(MAX) >> str; // armazena a string digitada pelo usuário enquanto o setw(MAX) define o tamanho máximo da string, 
                             //impedindo que o usuário digite uma string maior que o tamanho máximo e trave o sistema
                             //na verdade até permite digitar mais, porém só ira reconhecer até o limite

    cout << "Voce digitou: " << str << endl; //mostra a string digitada pelo usuário
    return 0;
}
