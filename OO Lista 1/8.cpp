/*Suponha que se deseja gerar uma tabela de múltiplos de qualquer número.
Escreva um programa que permita ao usuário digitar o número e, em seguida,
gere a tabela, formatando-a em 10 colunas e 20 linhas. A interação com o
programa deve ficar restrita apenas as três primeiras linhas mostradas: */
#include <iostream>
using namespace std;

int main(){
    int x, i, j, y = 0;  // x eh o numero, i eh a linha, j eh a coluna e y o resultado 
    cout << "Digite um numero: " << endl;
    cin >> x; // aqui o usuario escolhe o numero que irao ser mostrados os multiplos
    for (i = 1; i <= 20; i++){ // da linha 1 ate a linha 20 ira executar os comandos abaixo
        for (j = 1; j <=10; j++){ // da coluna 1 ate a coluna 10 ira executar o seguinte
            y += x; // o "y" que eh o resultado sera somado de  7
            if (i<=3) // caso a linha seja menor ou igual a 3
            {        
                cout << y << " "; // ira mostar o primeiro multiplo de x e assim por diante, ate chegar na coluna 10
            }
        }
        if (i<=3) // apos chegar na coluna 10, ira executar o seguinte
        {
            cout << endl; // fim de linha para começar a seguinte linha, ou seja, i=2 e assim por diante
                          // foi necessario limitar para i<=3 pois se nao iria ficar dando fim de linha ate a linha 20
                          // e isso resultaria em 17 linhas em branco no terminal
        }
    }
    return 0;
}