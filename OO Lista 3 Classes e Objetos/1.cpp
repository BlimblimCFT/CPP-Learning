#include <iostream>
using namespace std;

/* 1) Escreva uma classe marca com três membros de dados, para armazenar
as notas de um estudante. Escreva três funções membros entrada() para
entrada das notas, soma() para calcular a soma e retornar a soma e media()
para calcular a média e retornar a média das notas do estudante. */

class marca{ // declara a classe marca
    private: // declara os atributos privados
        float nota1, nota2, nota3; // declara as variaveis que vao ser utilizadas
    public: // declara os atributos publicos
        void entrada(); // declara a funcao entrada
        void soma(); // declara a funcao soma
        void media(); // declara a funcao media
};

void marca::entrada(){ // declara a funcao entrada
    cout << "Digite as notas do aluno: " << endl; // mostra na tela o que o usuario deve digitar
    cin >> nota1 >> nota2 >> nota3; // obtem as notas do usuario
}

void marca::soma(){ // declara a funcao soma
    cout << "A soma das notas eh: " << nota1 + nota2 + nota3 << endl; // mostra na tela a soma das notas
} 

void marca::media(){ // declara a funcao media
    cout << "A media das notas eh: " << (nota1 + nota2 + nota3) / 3 << endl; // mostra na tela a media das notas
}

int main(){ // declara o main
    marca aluno; // declara o objeto aluno da classe marca
    aluno.entrada(); // chama a funcao entrada
    aluno.soma(); // chama a funcao soma
    aluno.media(); // chama a funcao media
    return 0; 
}