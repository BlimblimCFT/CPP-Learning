#include <iostream>
using namespace std;

//Existem classes bases e classes derivadas. Para definir uma classe derivada, usamos class NomeSubClasse : modificador NomeClasseBase.
//o modificador pode ser public, protected ou private.
//Faça uma classe base veiculorodoviario e subclasses caminhao e automovel
//A classe base tem atributos nrodas e npassageiros como membros privados.
//Como membros publicos tera a função setanrodas, pegarodas, setanpassageiros e pegapassageiros.
//A classe caminhao herda os atributos e membros da classe base veiculorodoviario e tem um atributo carga como membro privado.
//A classe automovel herda os atributos e membros da classe base veiculorodoviario e tem um atributo tipocarro como membro privado
//Os possiveis tipos de carro sao: carro, van e SUV.
class veiculorodoviario{
    private:
        int nrodas;
        int npassageiros;
    public:
        void setanrodas(int n){
            nrodas = n;
        }
        int pegarodas(){
            return nrodas;
        }
        void setanpassageiros(int m){
            npassageiros = m;
        }
        int pegapassageiros(){
            return npassageiros;
        }   
};

class caminhao: public veiculorodoviario{
    private:
        int carga;
    public:
        void setacarga(int n){
            carga = n;
        }
        int pegacarga(){
            return carga;
        }
        void mostra();
};

enum tipocarro{
    carro, van, SUV
};
class automovel: public veiculorodoviario{
    private:
        enum tipocarro tipo;
    public:
        void setatipo(enum tipocarro t){
            tipo = t;
        }
        enum tipocarro pegatipo(){
            return tipo;
        }
        void mostra();
};

void caminhao::mostra(){
    cout << "\nNumero de rodas: " << pegarodas() << "\nNumero de passageiros: " << pegapassageiros() << "\nCarga: " << pegacarga() << endl;
}

void automovel::mostra(){
    cout << "\nNumero de rodas: " << pegarodas() << "\nNumero de passageiros: " << pegapassageiros() << "\nTipo de automovel: ";
    switch(pegatipo()){
        case carro:
            cout << "carro";
            break;
        case van:
            cout << "van";
            break;
        case SUV:
            cout << "SUV";
            break;
    }
    cout << endl;
}

int main (){
    caminhao c1, c2;
    automovel a1;
    veiculorodoviario v1;
    c1.setanrodas(6); //seta o numero de rodas do caminhao c1 com 6, METODOS HERDADOS DA CLASSE BASE
    c2.setanrodas(10); //seta o numero de rodas do caminhao c2 com 10, METODOS HERDADOS DA CLASSE BASE
    c1.setanpassageiros(2); //seta o numero de passageiros do caminhao c1 com 2, METODOS HERDADOS DA CLASSE BASE
    c2.setanpassageiros(4); //seta o numero de passageiros do caminhao c2 com 4, METODOS HERDADOS DA CLASSE BASE
    c1.setacarga(1000); //seta a carga do caminhao c1 com 1000, METODO DA CLASSE CAMINHAO
    c2.setacarga(2000); //seta a carga do caminhao c2 com 2000, METODO DA CLASSE CAMINHAO
    c1.mostra(); //mostra os dados do caminhao c1
    c2.mostra(); //mostra os dados do caminhao c2

    a1.setanrodas(4); //seta o numero de rodas do automovel a1 com 4, METODOS HERDADOS DA CLASSE BASE
    a1.setanpassageiros(10); //seta o numero de passageiros do automovel a1 com 4, METODOS HERDADOS DA CLASSE BASE
    a1.setatipo(van); //seta o tipo do automovel a1 com van, METODO DA CLASSE AUTOMOVEL
    a1.mostra(); //mostra os dados do automovel a1. POLIMORFISMO

    system ("pause");
    return 0;
}