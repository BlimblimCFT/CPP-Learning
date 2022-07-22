#include <iostream>
using namespace std;

/* 2) Escreva uma classe círculo com um membro de dados raio. Escreva três
funções membros le_raio() para ler um parâmetro de raio válido, area() para
mostrar o raio e circum() para calcular e mostrar a circunferência do círculo. */

class circulo{
    private:
        float raio;
    public:
        void le_raio();
        void area();
        void circum();
};

void circulo::le_raio(){
    cout << "Digite o raio do circulo: " << endl;
    cin >> raio;
}

void circulo::area(){
    cout << "A area do circulo eh: " << 3.14 * raio * raio << endl;
}

void circulo::circum(){
    cout << "A circunferencia do circulo eh: " << 2 * 3.14 * raio << endl;
}

int main(){
    circulo c;
    c.le_raio();
    c.area();
    c.circum();
    return 0;
}