#include <iostream>
using namespace std;

//não reconhece espaço

int main()
{
    const int MAX = 40; // máximo de caracteres
    char str[MAX]; // variável tipo string
    cout << "Digite uma string(matriz de caracteres): "; // pede para o usuário digitar uma string
    cin >> str; // armazena a string digitada pelo usuário

    cout << "Voce digitou: " << str << endl; //mostra a string digitada pelo usuário
    return 0;
}
