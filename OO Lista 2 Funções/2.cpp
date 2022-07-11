#include <iostream>
using namespace std;

void tabela(); // declaracao da funcao tabela para poder usar apos o main
int numero; // variavel global numero para ser utilizada na funcao tabela e funcao main
int main(){
    cout << "Digite um numero \n";
    cin >> numero;
    tabela(); // chamada da funcao tabela
    return 0;
}

void tabela(){ //funcao tabela que sera chamada na funcao main
    int i, resultado;
    for (i=1; i<=10; i++)
    {
    resultado = numero*i;
    cout << numero << " * " << i << " = " << resultado << endl;
    }
}