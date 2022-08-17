//Exemplo de ordenação de vetores

#include <iostream>
using namespace std;

int main()
{
    int vetor[5] = {7,9,8,2,5};
    int i, j, aux;
    for ( i = 0; i < 5; i++)
    {
        for ( j = i+1; j < 5; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    cout << "Vetor ordenado: " << endl;
    for ( i = 0; i < 5; i++)
    {
        cout << vetor[i] << " ";
    }
    return 0;
}