#include <iostream>
#include "figuras.h"


int main(){
    Quadrado q(3);
    Triangulo t(4,6);

    std::cout << "Altura do triangulo: " << t.getAltura() <<
    "\nBase do triângulo: " << t.getBase() <<
    "\nLado do quadrado: " << q.getX() << endl;

    std::cout << "\n\nAltura do triângulo: " << t.getAltura() << endl;

    t.setaltura(7);
    std::cout << "\nNova altura do triângulo pós modificação: " << t.getAltura() << endl;



    return 0;
}

