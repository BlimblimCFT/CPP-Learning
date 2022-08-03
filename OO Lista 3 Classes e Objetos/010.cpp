 /* 10) Escreva uma classe pessoa que tenha como membros de dados (nome,
idade, salário e endereço) e uma estrutura endereço (número da casa, rua,
cidade e estado). O programa deverá ter duas funções membros:
entrada_dados() e mostra_dados(). O programa deverá escrever:
Detalhes da pessoa: Nome, idade, salário, número da casa, número da rua,
a cidade e o estado. Cada uma dessas informações em linhas separadas. */

#include <iostream>
#include <conio.h> //necessario para ler o ESC
using namespace std;

class pessoa
{
    private:
        string nome, cidade, estado;
        int idade, ncasa, rua;
        double salario;
    public:
        void entrada_dados();
        void mostra_dados();
};

void pessoa::entrada_dados()
{
    cout << "Insira nome: ";
    cin >> nome;
    cout << "Insira idade: ";
    cin >> idade;
    cout << "Insira salario: ";
    cin >> salario;
    cout << "Insira endereco: ";
    cin >> ncasa >> rua >> cidade >> estado;
}

void pessoa::mostra_dados()
{
    cout << "Nome: " << nome << "\nIdade: " << idade << "\nSalario: "
    << salario << "\nNumero Casa: " << ncasa << "\nRua: " << rua
    << "\nCidade: " << cidade << "\nEstado: " << estado << endl;
}

int main()
{
    pessoa pessoa;
    pessoa.entrada_dados();
    pessoa.mostra_dados();
    return 0;
}
