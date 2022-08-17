/* 3) Repita o exercício 2, e considere que a turma é composta
por 40 estudantes. */

#include <iostream>
using namespace std;

//classe resultado
class resultado
{
    //atributos da classe
    private: //atributos privados
        int matricula[40]; //matricula do aluno
        string nome[40]; //nome do aluno
        int notas[40][3]; //vetor de notas para cada aluno
    public: //atributos publicos
        void entrada(); //entrada de dados
        void mostra(); //mostra os dados
        int total(); //retorna o total de notas
        float media(); //retorna a media das notas
};


//definicao das funcoes membros

void resultado::entrada()
{
    cout << "Digite as matriculas dos estudantes, pressionando enter apos cada matricula e inserindo a proxima: "; //solicita matricula
    for (int i = 0; i < 40; i++) //percorre o vetor de matriculas
    {
        cin >> matricula[i]; //le a matricula do vetor até o 40
    }
    cout << "Digite os nomes dos estudantes: "; //solicita nome
    for (int i = 0; i < 40; i++) //percorre o vetor de nomes
    {
        cin >> nome[i]; //le o nome do vetor até o 40
    }
    for (int i = 0; i < 40; i++) //percorre o vetor de notas
    {
        cout << "Digite as notas do estudante " << nome[i] << ": "; //solicita notas
        for (int j = 0; j < 3; j++) //percorre o vetor de notas
        {
            cin >> notas[i][j]; //le a nota do vetor até o 3
        }
        cout << endl; //pula uma linha
    }
    cout << endl; //pula uma linha
}

void resultado::mostra()
{
    for (int i = 0; i < 40; i++) //percorre o vetor de alunos
    {
        cout << "Matricula: " << matricula[i] << endl; //mostra matricula
        cout << "Nome: " << nome[i] << endl; //mostra nome
        cout << "Notas: "; //mostra notas
        for (int j = 0; j < 3; j++) //percorre o vetor de notas de cada aluno
        {
            cout << notas[i][j] << " "; //mostra a nota do vetor até o 3
        }
        cout << endl; //pula uma linha
    }
    cout << endl; //pula uma linha
}

int resultado::total()
{
    int soma[40] = {0}; //vetor de soma de notas
    for (int i = 0; i < 40; i++) //percorre o vetor de notas
    {
        for (int j = 0; j < 3; j++) //percorre o vetor de notas de cada aluno
        {
            soma[i] += notas[i][j]; //soma as notas de cada aluno
        }
        cout << "Soma das notas do estudante " << nome[i] << ": " << soma[i] << endl; //mostra a soma de notas de cada aluno
    } 
    for (int i = 0; i < 40; i++)
    {
        return soma[i]; //retorna a soma de notas de cada aluno
    }
    return 0; //retorna 0
}

float resultado::media()
{
    float media[40] = {0}; //vetor de media de notas de cada aluno
    for (int i = 0; i < 40; i++) //percorre o vetor de notas
    {
        for (int j = 0; j < 3; j++) //percorre o vetor de notas de cada aluno
        {
            media[i] += notas[i][j]; //soma as notas de cada aluno
        }
        media[i] = media[i]/3; //divide a soma de notas de cada aluno por 3
        cout << "Media do estudante " << nome[i] << ": " << media[i] << endl; //mostra a media de notas de cada aluno
    }
    for (int i = 0; i < 40; i++)
    {
        return media[i]; //retorna a media de notas de cada aluno
    }
    return 0; //retorna 0
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