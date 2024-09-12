#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Endereco e("Rua Java", 105, "Cond Ilha de Bali");
    Pessoa p("João", "Zaros", 52839483823, 9, 11, 2024, e);

    cout <<"Dados da pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
    cout << "Data de nascimento: " << p.getNascimento() << endl;
    cout << "Endereco: " << p.getEndereco() << endl;
}