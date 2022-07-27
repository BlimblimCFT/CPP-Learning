/* 6) Escreva uma classe Cartesiano com dois membros de dados reais, e duas
funções entrada_dados() e mostra_dados() para ler e escrever os dados
dos membros de dados. As funções deverão ser definidas fora da classe.
Crie um objeto dc, a partir do qual deverão ser lidos os dados do sistema
cartesiano. */

#include <iostream>
using namespace std;

class Cartesiano
{
private: //membros privados
	double x, y; //dados do sistema cartesiano
public:
	void entrada_dados() //função para ler dados do sistema cartesiano
	{
		cout << "Digite o valor de x: "; 
		cin >> x; 
		cout << "Digite o valor de y: ";
		cin >> y;
	}
	void mostra_dados() //função para exibir dados do sistema cartesiano
	{
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};

int main()
{
	Cartesiano dc; //cria objeto dc do tipo Cartesiano
	dc.entrada_dados(); //lê dados do sistema cartesiano
	dc.mostra_dados(); //exibe dados do sistema cartesiano
	return 0; 
}

