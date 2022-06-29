#include <iostream>
using namespace std;

int main (){
    int y, i, j; //declaracao variaveis utilizadas nos loops "for" e "y" sendo o total do somatorio
    for (i=1; i<=5; i++){ // i<= 5 pois seria o somatorio de 1 ate 5
        y = 0; // y = 0 para resetar o valor de y para 0 apos completar o loop do j
        for (j=1; j<=i; j++){ // esse loop ira repetir "i" vezes de acordo com o loop acima
            cout << j; 
            y += j; 
            if(j<i){ 
                cout << "+";
            }
        }
        cout << "=" << y << endl;
    }
    return 0;
}