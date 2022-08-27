/* Escreva um programa que mostre um quadro de caracteres usando
uma função. O programa principal receba um número e um caractere,
e passa-os para a função. Por exemplo se o usuário digitar 3 e #, a
função mostra 3 linhas com o símbolo #. */
#include <iostream>
using namespace std;

void quadro();
int numero;
char caractere;
int main(){
    cout << "Digite um numero e um caractere: " << endl;
    cin >> numero >> caractere;
    quadro();
    return 0;
}

void quadro(){
    int linha, coluna;
    for (linha = 1; linha <= numero; linha++)
    {
        for (coluna = 1; coluna <= numero; coluna++)
        {
            cout << caractere << " "; 
        }
        cout << endl;
    }
}

