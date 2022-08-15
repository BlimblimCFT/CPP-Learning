#include <iostream>
using namespace std;

/*4) Escreva uma classe "livro" com três membro de dados livroID, "paginas"
e "preco".
 Também contém as seguintes funções membro:
 - A função obter() é usada para entrada dos valores.
 - A função mostrar() é usada para mostrar os valores.
 - A função definir() é usada para definir os dados membros usando
parâmetros.
 - A função mostrapreco() usada para retornar o valor do preço.
 O programa deve criar dois objetos da classe e adentrar valores para esses
objetos. Ademais o programa deve mostrar os detalhes do livro mais caro. */

class livro
{
private:
	int livroID;
	int paginas;
	float preco;
public:
	livro()
	{
		livroID = 0;
		paginas = 0;
		preco = 0;
	}
	void obter()
	{
        do{
           if (livroID < 0)
        {
            cout << "Livro ID invalido, tente novamente: \n";
            cin.clear();
            cin.ignore();
        }
        if (paginas < 0)
        {
            cout << "Paginas invalidas, tente novamente: \n";
            cin.clear();
            cin.ignore();
        }
        if (preco < 0)
        {
            cout << "Preco invalido, tente novamente: \n";
            cin.clear();
            cin.ignore();
        }
		cout << "Digite o ID do livro: \n";
		cin >> livroID;
		cout << "Digite o numero de paginas: \n";
		cin >> paginas;
		cout << "Digite o preco: \n";
		cin >> preco;
        }
        while(livroID<0 || paginas<0 || preco<0);
	}
	void mostrar()
	{
		cout << "ID do livro: " << livroID << endl;
		cout << "Numero de paginas: " << paginas << endl;
		cout << "Preco: " << preco << endl;
	}
	void definir(int id, int pg, float pr)
	{
		livroID = id;
		paginas = pg;
		preco = pr;
	}
	float mostrapreco()
	{
		return preco;
	}
};

int main()
{
	livro livro1;
	livro livro2;
	livro1.obter();
	livro2.obter();
	livro1.mostrar();
	livro2.mostrar();
	if (livro1.mostrapreco() > livro2.mostrapreco())
	{
		cout << "O livro mais caro e o livro1" << endl;
	}
	else
	{
		cout << "O livro mais caro e o livro2" << endl;
	}
	return 0;
}
