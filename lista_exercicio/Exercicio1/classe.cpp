#include "classeabstrata.h"
#include <vector>

int main(){
    // Teste 1 — Polimorfismo
    // std::vector<Forma*> formas;
    // formas.push_back(new Retangulo("R", 4, 3));
    // formas.push_back(new Circulo("C", 2));

    // for (auto f : formas)
    //     std::cout << f->descricao() << std::endl;

    // for (auto f : formas)
    //     delete f;

    // formas.clear();

    // Teste 2 - Operadores
    // Retangulo r1("R1", 2, 3);
    // Retangulo r2("R2", 1, 1);

    // r1 *= 2.5;

    // std::cout << r1 << std::endl;
    // std::cout << (r1 + r2) << std::endl;
    // std::cout << (r1 * 2) << std::endl;

    // // Teste 3 - template
    // Retangulo r1("R1", 3, 4);
    // Circulo c1("C1", 5);
    
    // Par<Retangulo, Circulo> p1(r1,c1);
    // std::cout << p1 << std::endl;

    // Par<Circulo, Retangulo> p2 = p1.invertido();
    // std::cout << "p2 = " << p2 << std::endl;
    // std::cout << "p1 = " << p1 << std::endl;

    // Teste 4 - Exceção

    try {
        Retangulo r2("R2", 1, 1);

        std::cout << "Multiplicação por -1 pra testar: " << std::endl;
        r2*= -1;

        Circulo c1("C1", -5);
    } 

    catch(const std::invalid_argument& e){
        std::cout << "O erro foi: " << e.what() << std::endl;
    }

    std::cout << "Teste se o programa ainda roda >= " << std::endl;


    return 0;
    }
