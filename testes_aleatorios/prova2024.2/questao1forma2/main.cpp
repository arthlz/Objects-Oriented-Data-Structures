#include "figurasgeo.h"
#include <iostream>

int main(){
    Quadrado quad(0, 0, 7);
    Triangulo tri(0, 0, 3, 8);

    std::cout << 
    "\nLado do quadrado = " << quad.get_lado() <<
    "\nÁrea do quadrado = " << quad.area() <<

    "\n\nBase do triângulo = " << tri.get_base() <<
    "\nAltura do triângulo = " << tri.get_altura() <<
    "\nÁrea do triângulo = " << tri.area() << std::endl; 

    return 0;
}