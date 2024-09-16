#include <iostream>
#include <exception>
using namespace std;

class DivisaoPorZeroException: public exception{
    public:
        virtual const char* what() const throw(){
            return "Exception: divisao por zero (classe)";
        }
};

int divisao(int x, int y){
    if(y == 0)
        throw DivisaoPorZeroException();
    return x / y;
}

int main(){
    int x = 4, y = 0, z;
    try{
        z = divisao(x, y);
        cout << "x/y=" << z << endl;
    } catch(DivisaoPorZeroException erro){
        cout << erro.what();
    } catch(int erro){
        cout << "Erro";
    }
}