/* 2) Escreva uma classe "resultado" que contenha a matricula,
nome e três notas de uma disciplina. As notas são
armazenadas num vetor. A classe contém também as
seguinte funções:
 - função entrada() é usada para adentrar os valores dos
membros de dados
 - função mostra() é usada para mostrar os valores dos
membros de dados
 - função total() retorna o total de notas de um estudante
 - função media() retorna a média das notas de um
estudante.
O programa deve criar um objeto dessa classe e chamar as
funções membros. */

#include <iostream>
using namespace std;

class resultado
{
    private:
        int matricula;
        string nome;
        int notas[3];
    public:
        void entrada();
        void mostra();
        int total();
        float media();
};

void resultado::entrada()
{
    cout << "Digite a matricula: ";
    cin >> matricula;
    cout << "Digite o nome: ";
    cin >> nome;
    cout << "Digite as notas: ";
    for (int i = 1; i <= 3; i++)
    {
        cin >> notas[i];
    }
    cout << endl;
}

void resultado::mostra()
{
    cout << "Matricula: " << matricula << endl;
    cout << "Nome: " << nome << endl;
    cout << "Notas: ";
    for (int i = 1; i <= 3; i++)
    {
        cout << notas[i] << " ";
    }
    cout << endl;
}

int resultado::total()
{
    int soma = 0;
    for (int i = 1; i <= 3; i++)
    {
        soma += notas[i];
    }
    cout << "Total: " << soma << endl;
    return soma;
}

float resultado::media()
{
    float media = 0;
    for (int i = 1; i <= 3; i++)
    {
        media += notas[i];
    }
    media = media / 3;
    cout << "Media: " << media << endl;
    return media;
}

int main()
{
    resultado aluno;
    aluno.entrada();
    aluno.mostra();
    aluno.total();
    aluno.media();
    return 0;
}