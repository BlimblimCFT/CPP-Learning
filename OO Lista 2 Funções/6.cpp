/* Elabore um programa que use um função mult(int , int ) para
determinar para um par de inteiros se o segundo inteiro é múltiplo do
primeiro. A função deve receber os dois inteiros como argumento e
retornar 1 (verdadeiro) se o segundo inteiro é múltiplo do primeiro e
0 (falso) caso contrário. O programa deve solicitar como entrada
o par de inteiros. */
#include <iostream>
using namespace std;


int num1, num2;
void mult(int a, int b);
int main(){
    cout << "Digite dois numeros: " << endl;
    cin >> num1 >> num2;
    mult(num1, num2);
    return 0;
}

void mult(int a, int b){
    if(b%a == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }   
}