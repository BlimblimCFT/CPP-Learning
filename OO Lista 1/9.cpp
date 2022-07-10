#include <iostream>
#include <limits>
using namespace std;

int main(){
    float Temperatura;
    int x;
    do
    {
        cout << "Digite 1 para converter Fahrenheit para Celsius, \n";
        cout << "Digite 2 para converter Celsius para Fahrenheit: \n";
         if (!(cin >> x))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } 
    while (x < 1 || x > 2);
    if (x==1){
        do 
        {
            cout << "Digite a temperatura em Fahrenheit \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        while(!(cin >> Temperatura));
        Temperatura = (Temperatura - 32) / (float(9)/float(5));
        cout << "A temperatura em Celsius eh " <<  float(Temperatura) << endl;
    }
    if (x == 2)
    {
        do
        {
            cout << "Digite a temperatura em Celsius \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        while(!(cin >> Temperatura));
        Temperatura = (float(9)/float(5)) * Temperatura + 32;
        cout << "A temperatura em Fahrenheit eh " <<  Temperatura << endl;
    }
    
    return 0;
}


