/* 5) Crie uma classe que imite parte da funcionalidade do tipo de dados básico
int. Chame a classe Int (observe a letra maiúscula). Os únicos dados nesta
classe são uma variável int.
Inclua funções de membro para inicializar um Int com 0, para inicializá-lo
com um valor int, para exibi-lo (parece um int) e para adicionar dois valores
Int.
Escreva um programa que exercite essa classe criando um valor Int não
inicializado e dois inicializados, somando os dois valores inicializados e
colocando a resposta no valor não inicializado e, em seguida, exibindo esse
resultado. */

#include <iostream>
using namespace std;


class Int //classe Int
{
private: //membros privados
	int valor;
public: //membros públicos
	Int()
	{
		valor = 0; //inicializa com 0
	}
	Int(int val)
	{
		valor = val; //inicializa com valor inteiro
	}
	void inicializar()
	{
		valor = 0; //inicializa com 0
	}
	void inicializar(int val)
	{
		valor = val; //inicializa com valor inteiro
	}
	void exibir()
	{
		cout << valor << endl; //exibe valor inteiro
	}
	void adicionar(Int val)
	{
		valor += val.valor; //soma valores inteiros
	}
}; 

int main()
{
    Int valor1; //cria objeto valor1 do tipo Int
    Int valor2(10); //cria objeto valor2 do tipo Int com valor 10
    Int valor3(20); //cria objeto valor3 do tipo Int com valor 20
    valor1.inicializar(); //inicializa valor1 com 0
    valor1.adicionar(valor2); //soma valor2 a valor1
    valor1.adicionar(valor3); //soma valor3 a valor1
    valor1.exibir(); //exibe valor1 após a soma
    return 0; 
} 
