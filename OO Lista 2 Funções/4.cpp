/* Escreva um programa que receba dois números e um operador
aritmético no programa principal e passa-os para uma função. A
função aplica a operação aritmética sobre os dois números com base
no operador digitado pelo usuário. Utilize na função a instrução
switch */
#include <iostream>
using namespace std;

void operacao();
int numero1, numero2;
char operador;
int main(){
    cout << "Digite um numero, um operador e outro numero: " << endl;
    cin >> numero1 >> operador >> numero2;
    operacao();
    return 0;
}

void operacao(){
    int resultado;
    switch (operador)
    {
    case '+':
        resultado = numero1 + numero2;
        cout << resultado;
        break;

    case '-':
        resultado = numero1 - numero2;
        cout << resultado;
        break;

    case '*':
        resultado = numero1 * numero2;
        cout << resultado;
        break;

    case '/':
        resultado = numero1 / numero2;
        cout << resultado;
        break;
    
    default:
        break;
    }
}