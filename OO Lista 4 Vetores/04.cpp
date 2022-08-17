/* 4) Escreva uma classe "TV" que tenha como atributos
NomeMarca, Modelo e Rpreco. Escreva um método
para mostrar todos os atributos e um método para mudar
os atributos. Escreva igualmente um construtor para
inicializar todos os atributos */

#include <iostream>
using namespace std;

class TV //classe TV
{
    private: //atributos privados
        string NomeMarca; //nome da marca
        string Modelo; //modelo
        float Rpreco; //preco
    public: //atributos publicos
        void mostra(); //mostra os dados
        void altera(); //altera os dados
        TV(string nome, string modelo, float preco) //construtor
        {
            NomeMarca = nome;
            Modelo = modelo;
            Rpreco = preco;
        }
};

void TV::mostra() //definicao da funcao mostra
{
    cout << "Nome da marca: " << NomeMarca << endl; //mostra nome da marca
    cout << "Modelo: " << Modelo << endl; //mostra modelo
    cout << "Preco: " << Rpreco << endl; //mostra preco
}

void TV::altera() //definicao da funcao altera
{
    cout << "Digite o nome da marca: "; //solicita nome da marca
    cin >> NomeMarca; //le nome da marca
    cout << "Digite o modelo: "; //solicita modelo
    cin >> Modelo; //le modelo
    do //loop para verificar preco 
    {
        cout << "Digite o preco: "; //solicita preco
        cin >> Rpreco; //le preco
    } while (Rpreco < 0); //verifica se o preço é menor que 0 e, portanto, se é invalido e se for, pede novamente
}

int main() // função principal
{
    TV tv("12 Mola", "Diferente", 12); //cria objeto da classe TV
    tv.mostra(); //mostra os dados
    tv.altera(); //altera os dados
    tv.mostra(); //mostra os dados alterados
    return 0; //retorna 0
}
