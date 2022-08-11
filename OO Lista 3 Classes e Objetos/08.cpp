/* 8) Escreva que declare uma classe perfeito com um membro de dados, e
duas funções entrada() e verifica_perfeito(), para ler o número e verificar
se o número lido é perfeito. O número lido no programa principal deverá ser
passado para a função entrada(). O programa deverá ser executado enquanto
o usuário assim o desejar.
Exemplo: 6 é um número perfeito, pois a soma dos seus fatores é igual a 6,
e os seus fatores são 1,2 e 3, e a soma dos fatores é 1+2+3=6. Igualmente,
28 também é número perfeito, pois os seus fatores são 1, 2, 4, 7 e 14, e a soma
é 1+2+4+7+14=28. */

#include <iostream>
using namespace std;

// declara a classe perfeito
class perfeito{
    private:
        int numero; // declara a variavel que vai ser lida 
    public:
        void entrada(); // declara a funcao entrada
        void verifica_perfeito(); // declara a funcao verifica_perfeito
};

void perfeito::entrada() //funcao entrada de perfeito que lera a entrada do usuario
{
    cout << "Digite um numero: "; 
    cin >> numero;
}


void perfeito::verifica_perfeito() //funcao verifica_perfeito que verifica se o numero lido eh perfeito
{
    int soma = 0, i; // declara as variaveis que vao ser utilizadas na funcao
    for(i = 1; i < numero; i++) // percorre o numero ate o numero digitado
    {
        if(numero % i == 0) // verifica se o numero digitado eh divisivel por 1
        {
            soma += i; // soma os fatores
        }
    }
    
    if(soma == numero) // verifica se a soma dos fatores é igual ao numero digitado
    {
        cout << "O numero " << numero << " eh perfeito" << endl; 
    }
    else{
        cout << "O numero " << numero << " nao eh perfeito" << endl;
    }
}

int main(){
    // o usuario decide se o programa deve continuar executando
    char continuar;
    do 
    {
        perfeito numero; // declara o objeto numero da classe perfeito
        numero.entrada(); // chama a funcao entrada
        numero.verifica_perfeito(); // chama a funcao verifica_perfeito
        cout << "Deseja continuar? (s/n) "; 
        cin >> continuar;
    }
    while(continuar == 's'); // enquanto o usuario digitar 's' o programa continua executando
    return 0;
}