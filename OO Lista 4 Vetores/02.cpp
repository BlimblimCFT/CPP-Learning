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

//classe resultado
class resultado
{
    //atributos da classe
    private: //atributos privados
        int matricula; //matricula do aluno
        string nome; //nome do aluno
        int notas[3]; //vetor de notas
    public: //atributos publicos
        void entrada(); //entrada de dados
        void mostra(); //mostra os dados
        int total(); //retorna o total de notas
        float media(); //retorna a media das notas
};


//definicao das funcoes membros

void resultado::entrada()
{
    cout << "Digite a matricula: "; //solicita matricula
    cin >> matricula;  //leitura da matricula
    cout << "Digite o nome: "; //solicita nome
    cin >> nome; //leitura do nome
    cout << "Digite as notas: "; //solicita notas
    for (int i = 1; i <= 3; i++) //percorre o vetor de notas
    {
        cin >> notas[i]; //le a nota do vetor até o 3
    }
    cout << endl; //pula uma linha
}

void resultado::mostra()
{
    cout << "Matricula: " << matricula << endl; //mostra matricula
    cout << "Nome: " << nome << endl; //mostra nome
    cout << "Notas: "; //mostra notas
    for (int i = 1; i <= 3; i++) //percorre o vetor de notas
    {
        cout << notas[i] << " "; //mostra a nota do vetor até o 3
    }
    cout << endl; //pula uma linha
}

int resultado::total()
{
    int soma = 0; //define a soma como 0 para iniciar a soma 
    for (int i = 1; i <= 3; i++) //percorre o vetor de notas
    {
        soma += notas[i]; //soma as notas 1 a 3
    }
    cout << "Total: " << soma << endl; //mostra o total
    return soma; //retorna a soma 
}

float resultado::media()
{
    float media = 0; //define a media como 0 para iniciar a media
    for (int i = 1; i <= 3; i++) //percorre o vetor de notas
    {
        media += notas[i]; //soma as notas 1 a 3
    }
    media = media / 3; //divide a soma por 3 para obter a media
    cout << "Media: " << media << endl; //mostra a media
    return media; //retorna a media
}

//definicao da funcao principal
int main()
{
    resultado aluno; //cria um objeto da classe resultado
    aluno.entrada(); //chama a função entrada
    aluno.mostra(); //chama a função mostra
    aluno.total(); //chama a função total
    aluno.media(); //chama a função media
    return 0; //retorna 0
}