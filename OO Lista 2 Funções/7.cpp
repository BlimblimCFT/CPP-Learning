/* Escreva um programa que receba dois inteiros no programa principal
e passa os valores para uma função. A função determina e retorna o
máximo divisor comum. O resultado final deve ser mostrado no
programa principal. */
#include <iostream>
using namespace std;

int mdc(int num1, int num2); // declaracao da funcao maximo divisor comum e as variaveis que vao ser utilizadas nela
int main(){
    int num1, num2; // declaracao de variaveis
    cout << "Digite dois numeros para ver o maximo divisor comum: " << endl;
    cin >> num1 >> num2; // obtencao das variaveis digitadas pelo usuario
    cout << mdc(num1, num2); // mostra o maximo divisor comum de acordo com a funcao mdc
    return 0;
}

int mdc(int num1, int num2){ // utiliza as variaveis obtidas no programa principal
    if(num2==0) // se num2 for 0 entao 
    {
        return num1; // retorna o valor de num1
    }
    return mdc(num2, num1%num2); //caso o num2 nao seja 0, a funcao sera executada novamente
                                 //porem dessa vez, o num2 se tornara o num1 e
                                 //o resto da divisao entre num1 e num2 se tornara o num2
                                 //por exemplo: 15 e 6, 6 nao eh 0, entao num1 vira 6
                                 // e realiza 15/6 eh 2 e resto 3
                                 //entao fica 6 e 3, 3 nao e 0, logo vira num1
                                 //6/3 eh 2 tambem, porem resto 0
                                 //logo o mdc fica (3, 0)
                                 // 0 == 0 entao retorna num1 que eh 3
                                 //mdc de 15 e 6 igual a 3
}