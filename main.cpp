#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Pessoa p;
    p.setNome("João");
    p.setSobrenome("Zaros");
    p.setCPF(52839483823);

    cout <<"Dados da pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
}