#include <iostream>

using namespace std;

void darBonus(int *ptrSalario){
    *ptrSalario += 500;
}

int main(){
    int *ptr = nullptr; // esse papel está em branco por enquanto
    int meusalario = 2000;
    darBonus(&meusalario);
    cout << "Meu salário é: " << meusalario << '\n';
}


