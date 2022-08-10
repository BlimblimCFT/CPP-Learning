#include <iostream>
using namespace std;

class Pilha
{
    private:
    enum {MAX = 10}; //sintaxe não padronizada
    int st[MAX]; //pilha: vetor de inteiros
    int topo; //numeração do topo da pilha

    public:
    Pilha() //construtor
    {topo = 0;} //inicializa topo como 0
    void push (int var) //função para colocar o numero na pilha
    {
        st[topo++] = var;
    }
    int pop() //função para retirar o numero da pilha
    {
        return st[--topo];
    }
};



int main()
{
    Pilha p1; //cria uma pilha p1
    p1.push(11); p1.push(22); //coloca 11 e 22 na pilha
    cout << "1: " << p1.pop() << endl; //retira 22
    cout << "2: " << p1.pop() << endl; //retira 11
    p1.push(33); p1.push(44); //coloca 33 e 44 na pilha
    p1.push(55); p1.push(66); //coloca 55 e 66 na pilha
    cout << "3: " << p1.pop() << endl; //retira 66
    cout << "4: " << p1.pop() << endl; //retira 55
    cout << "5: " << p1.pop() << endl; //retira 44
    cout << "6: " << p1.pop() << endl; //retira 33
    return 0;
}
