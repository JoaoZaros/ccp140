#include <iostream>
using namespace std;

class Pessoa{
    private:
        string nome;
        string sobrenome;
        long cpf;

    public:

        Pessoa(){}

        Pessoa(string nome, string sobrenome, long cpf):
        nome{nome}, sobrenome{sobrenome} //ou assim
        {
            this->cpf = cpf //ou assim
        }

        void setNome(string nome){
            this->nome = nome;
        }

        void setSobrenome(string sobrenome){
            this->sobrenome = sobrenome;
        }

        void setCPF(long cpf){
            this->cpf = cpf;
        }

        string getNome(){
            return this->nome;
        }

        string getSobrenome(){
            return sobrenome;
        }

        long getCPF(){
            return cpf;
        }
};