#include <iostream>
#include <limits>
using namespace std;

int main(){
    float a, b, resultado;
    char operador;
    char opcao;
    do {
    cout << "Insira um numero, um operador e outro numero" << endl;
    cin >> a >> operador >> b;
    if (cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    switch (operador)
    {
    case '+':
        resultado = a + b;
        cout << a << " + " << b << " = " << resultado << endl;
        break;

    case '-':
        resultado = a - b;
        cout << a << " - " << b << " = " << resultado << endl;
        break;

    case '*':
        resultado = a * b;
        cout << a << " * " << b << " = " << resultado << endl;
        break;

    case '/':
        resultado = a / b;
        cout << a << " / " << b << " = " << resultado << endl;
        break;    
    
    default:
        cout << "Invalido, tente novamente" << endl;
        break;
    }
    do
    { 
        cout << "Quer efetuar outra operacao? ('S' ou 'N') \n";
        if (cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } 
    while (!(cin >> opcao) || opcao != 'S' && opcao != 'N');
    } while (opcao == 'S' );

    return 0;
}