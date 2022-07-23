#include <iostream>
using namespace std;

/*3) Escreva uma classe Estudante que tenha nota e o grau como membros de
dados. Um construtor com dois parâmetros inicializa os membros de dados
com certos valores dados e a função membro mostra os valores dos membros
de dados. Utilize os membros de dados como argumentos da função. Crie
dois objetos e mostre os valores.*/

class Estudante {
private:
	int nota;
	int grau;
public:
	Estudante(int n, int g) {
		nota = n;
		grau = g;
	}
	void mostra() {
		cout << "Nota: " << nota << endl;
		cout << "Grau: " << grau << endl;
	}
};

int main() {
	Estudante est1(10, 1);
	Estudante est2(20, 2);
	est1.mostra();
	est2.mostra();
	return 0;
}
