/*9) Imagine um pedágio em uma ponte. Os usuários dos carros que passam
pela ponte devem pagar um pedágio de 50 centavos.
Na maioria das vezes eles o fazem, mas às vezes um usuário do carro passa
sem pagar. O pedágio registra o número de carros que passaram
e o valor total arrecadado.
Modele este pedágio com uma classe chamada Pedagio. Os dois itens de
dados são um tipo inteiro sem sinal para armazenar o número total de carros
e um tipo double para armazenar o valor total de dinheiro arrecadado. Um
construtor inicializa ambos com 0. Uma função membro chamada
Paga_carro() incrementa o total do carro e adiciona 0,50 ao total em
dinheiro. Outra função, denominada Nao_Paga_carro(), incrementa o total
do carro, mas não adiciona nada ao total em dinheiro. Finalmente, um
função membro denominada mostra() exibe os dois totais. Faça membro
apropriado funções const.
Inclua um programa para testar esta classe. Este programa deve permitir que
o usuário pressione uma tecla para contar um carro pagante e outro para
contar um carro não pagante. Ao apertar a tecla Esc (escape) deve fazer com
que o programa imprima o total de carros, o total de dinheiro e depois saia. */

#include <iostream>
#include <conio.h> //necessario para ler o ESC
using namespace std;

class Pedagio
{
    private:
        int total_carros;
        double total_dinheiro;
    public:
        Pedagio();
        void Paga_carro();
        void Nao_Paga_carro();
        void mostra();
};

Pedagio::Pedagio()
{
    total_carros = 0;
    total_dinheiro = 0;
}

void Pedagio::Paga_carro()
{
    total_carros++;
    total_dinheiro += 0.50;
}

void Pedagio::Nao_Paga_carro()
{
    total_carros++;
}

void Pedagio::mostra()
{
    cout << "Total de carros: " << total_carros << endl;
    cout << "Total de dinheiro: " << total_dinheiro << endl;
}

int main()
{
    Pedagio pedagio;
    char tecla;
    do{
        cout << "Pressione '1' para contar um carro pagante \n '2' para contar um carro nao pagante ou \n ESC para finalizar a contagem: " << endl;
        tecla = getch(); //usa getch de conio.h para poder ler a tecla pressionada, sem necessario uso de ENTER, de forma a contabilizar o ESC
        if(tecla == '1'){
            pedagio.Paga_carro();
        }
        else if(tecla == '2'){
            pedagio.Nao_Paga_carro();
        }
    }while(tecla != 27);
    pedagio.mostra();
    return 0;
}
