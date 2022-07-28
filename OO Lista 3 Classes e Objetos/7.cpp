/* 7) Escreva que declare uma classe modelo com dois membros de dados, um
número inteiro e um real e duas funções le_dados() e escreve_dados() para
ler e escrever os dados dos membros de dados.
A função escreve_dados() deverá ser definida fora da classe. Crie um objeto
x e inicialize os seus membros, posteriormente crie outro objeto y e use como
seus membros, o triplo dos membros do objeto x. */


#include <iostream>
using namespace std;

//classe modelo
//membros de dados inteiro e real foram
//definidos no public porque
//precisam ser acessados posteriormente
//pela função escreve_dados()
class modelo
{
	public:
	int inteiro; 
	float real;
		void le_dados()
        {
			cout << "Digite o inteiro: ";
			cin >> inteiro;
			cout << "Digite o real: ";
			cin >> real;
		}        
};

//função escreve_dados, definida fora da classe
//para exibir os dados do objeto x
//e o triplo do objeto x como membros de dados do objeto y
void escreve_dados(modelo x, modelo y) 
{
	y.inteiro = x.inteiro * 3; //triplo do inteiro do objeto x
	y.real = x.real * 3; //triplo do real do objeto x
	cout << "x:\nInteiro: " << x.inteiro << "\nReal: " << x.real << endl;
	cout << "y:\nInteiro: " << y.inteiro << "\nReal: " << y.real << endl;
}

int main()
{
	modelo x; //objeto x do tipo modelo
	x.le_dados(); //lê dados do objeto x
	modelo y; //objeto y do tipo modelo
	escreve_dados(x, y); //exibe dados do objeto x e triplo do objeto x como membros de dados do objeto y
	return 0;
}