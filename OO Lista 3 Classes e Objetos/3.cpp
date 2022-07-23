#include <iostream>
using namespace std;

/*3) Escreva uma classe Estudante que tenha nota e o grau como membros de
dados. Um construtor com dois parâmetros inicializa os membros de dados
com certos valores dados e a função membro mostra os valores dos membros
de dados. Utilize os membros de dados como argumentos da função. Crie
dois objetos e mostre os valores.*/

class Estudante //classe estudante
{ 
private: //membros de dados
	int nota; //nota do estudante
	int grau; //grau do estudante
public: //membros de ação
	Estudante(int n, int g) //construtor
    {
		nota = n; //atribui nota
		grau = g; //atribui grau
	}
	void mostra() //função mostra
    {
		cout << "Nota: " << nota << endl; //mostra nota
		cout << "Grau: " << grau << endl; //mostra grau
	}
};

int main()
{
	Estudante est1(10, 1); //cria estudante 1
	Estudante est2(20, 2); //cria estudante 2
	est1.mostra(); //mostra estudante 1
	est2.mostra(); //mostra estudante 2
	return 0;
}
