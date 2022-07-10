#include <iostream>
using namespace std;

int main(){
    char crc;
    cout << "Digite um caractere: \n";
    cin >> crc;
    if (crc == 'a' || crc == 'A' || crc == 'e'
     || crc == 'E' || crc == 'i' || crc == 'I'
     || crc == 'o' || crc == 'O' || crc == 'u'
     || crc == 'U' )
     cout << "O caractere digitado eh uma vogal";
    else
     cout << "O caractere digitado nao eh uma vogal";
    return 0;
}