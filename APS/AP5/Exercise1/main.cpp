#include <iostream>
#include "exercise1.h"

int main(){
    std::cout << "--- Testando Construtores e I/O ---" << std::endl;
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction f3; // Usa padrão (0/1)

    std::cout << "f1: " << f1 << std::endl;
    std::cout << "f2: " << f2 << std::endl;
    std::cout << "f3 (default): " << f3 << std::endl;

    std::cout << "\n--- Testando Operadores Binarios ---" << std::endl;
    std::cout << f1 << " + " << f2 << " = " << (f1 + f2) << std::endl;
    std::cout << f1 << " - " << f2 << " = " << (f1 - f2) << std::endl;
    std::cout << f1 << " * " << f2 << " = " << (f1 * f2) << std::endl;
    std::cout << f1 << " / " << f2 << " = " << (f1 / f2) << std::endl;

    std::cout << "\n--- Testando Operador Unario ---" << std::endl;
    std::cout << "-( " << f1 << " ) = " << (-f1) << std::endl;

    std::cout << "\n--- Testando Operadores de Atribuicao ---" << std::endl;
    Fraction temp = f1;
    temp += f2;
    std::cout << f1 << " += " << f2 << "  -> Result: " << temp << std::endl;

    temp = f1;
    temp -= f2;
    std::cout << f1 << " -= " << f2 << "  -> Result: " << temp << std::endl;

    temp = f1;
    temp *= f2;
    std::cout << f1 << " *= " << f2 << "  -> Result: " << temp << std::endl;

    temp = f1;
    temp /= f2;
    std::cout << f1 << " /= " << f2 << "  -> Result: " << temp << std::endl;

    std::cout << "\n--- Testando Operadores de Incremento/Decremento (Prefixos) ---" << std::endl;
    temp = f1;
    std::cout << "++(" << f1 << ") = " << ++temp << std::endl;
    
    temp = f1;
    std::cout << "--(" << f1 << ") = " << --temp << std::endl;

    std::cout << "\n--- Testando Tratamento de Erro e Input ---" << std::endl;
    std::cout << "Digite uma fracao no formato (numerador/denominador): ";
    Fraction f4;
    if (std::cin >> f4) {
        std::cout << "Voce digitou (simplificado): " << f4 << std::endl;
    }
    
    return 0;
}
