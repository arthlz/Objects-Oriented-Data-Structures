#include "artigo.h"
#include <iostream>
#include <string>

using namespace std;

void test(Article copyObj) {
    cout << "\n--- Entrando na funcao test() ---" << endl;
    cout << "Total de artigos na memoria agora: " << Article::getCount() << endl;
    copyObj.print();
    cout << "--- Saindo da funcao test() ---\n" << endl;
} // copyObj será destruído aqui!

int main() {
    cout << "Total de artigos no inicio: " << Article::getCount() << "\n" << endl;

    // (usa o construtor padrao)
    Article a1(101, "Teclado Mecanico", 150.00);
    
    cout << "\nVamos chamar a funcao test() e passar a1 para ela:" << endl;
    
    // Ao chamar test(a1), o C++ cria uma cópia de a1 usando o Construtor de Cópia
    test(a1); 

    cout << "Voltamos para o main(). Total de artigos: " << Article::getCount() << "\n" << endl;

    return 0;
} 