#include <iostream>
using namespace std;

class distancia //classe
{
    private: //atributos
    int metros; //metros
    float centimetros; //centimetros em float

    public: //metodos
    void obtem_distancia() //funcao para obter a distancia
    {
        cout << "Digite a distancia em metros: "; cin >> metros; //entrada de dados para metros
        cout << "Digite a distancia em centimetros: "; cin >> centimetros; //entrada de dados para centimetros
    }
    void mostra_distancia() //funcao para mostrar a distancia
    {
        cout << "A distancia em metros eh: " << metros << endl; //saida de dados para metros
        cout << "A distancia em centimetros eh: " << centimetros << endl; //saida de dados para centimetros
    }
};

int main ()
{
    distancia d1 [20]; //vetor de distancias com 20 posicoes
    int n = 0; //contador de distancia
    char resposta; //resposta do usuario
    do
    {
        cout << "Digite o numero da distancia: " << n+1 << endl;
        d1[n++].obtem_distancia(); //obtem a distancia e incrementa o contador
        cout << "Deseja digitar outra distancia? (s/n): "; cin >> resposta; //entrada de dados para resposta
    }
    while (resposta == 's' && n<20); //permanece no loop enquanto a resposta for 's' e limita a repetir pro maximo de posicoes
    for (int i = 0; i < n; i++) //loop para mostrar as distancias
    {
        cout << "\nA distancia " << i+1 << " eh: " << endl; //saida de dados para distancia
        d1[i].mostra_distancia(); //mostra a distancia
    }
    return 0;
}
