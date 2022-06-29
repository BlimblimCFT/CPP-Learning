#include <iostream>
using namespace std;

int main (){
    int num, maior = 0, menor = 9;
    cout << "Digite um numero\n";
    cin >> num;
    while(num){
    int x = num % 10;
    maior = max(x, maior);
    menor = min(x, menor);
    num = num/10;
    }
    cout << "O digito mais significativo eh: " << maior << "\nO digito mais significativo eh: " << menor << endl;
    return 0;
}



/* ex: 8531 % 10 = 1
maior = max(1, 0) = 1
menor = min(1, 9) = 1
num = 8531/10 = 853 

853 % 10 = 3
maior = max(3, 1) = 3
menor = min (3, 1) = 1
num = 853/10 = 85

85 % 10 = 5
maior = max(5, 3) = 5
menor = min (5, 1) = 1
num = 85/10 = 8

8 % 10 = 8
maior = max(8, 5) = 8
menor = min (8, 1) = 1
num = 8/10 = 0 */
