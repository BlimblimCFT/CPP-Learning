#include <iostream>
using namespace std;
const int TAM = 5;
class Vetor
{
    private:
    int VETOR[TAM];
    public:
        void leVetor()
        {
            for(int i = 1; i <= TAM; i++)
            {
                cout << "Digite o valor do vetor: [" << i << "] ";
                cin >> VETOR[i];
            }
        }
        void mostraVetor()
        {
            for(int i = 1; i <= TAM; i++)
            {
                cout << "Vetor[" << i << "] = " << VETOR[i] << endl;
            }
        }
        void ordenaVetor()
        {
            int aux;
            for(int i = 1; i <= TAM; i++)
            {
                for(int j = 1; j <= TAM; j++)
                {
                    if(VETOR[i] < VETOR[j])
                    {
                        aux = VETOR[i];
                        VETOR[i] = VETOR[j];
                        VETOR[j] = aux;
                    }
                }
            }
        }
};

int main()
{
    Vetor v;
    v.leVetor();
    v.mostraVetor();
    v.ordenaVetor();
    v.mostraVetor();
    return 0;

}
