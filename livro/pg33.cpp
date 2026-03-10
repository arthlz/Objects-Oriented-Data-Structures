#include <iostream>
#include <cmath>

using namespace std;


const double pi = 3.141593;

int main() {
    double radius = 1.5;
    float raio_quadrado = pow(radius, radius);
    float area = pi * raio_quadrado;
    cout << "A área do círculo é: " << raio_quadrado << "cm²\n";
    return 0;
}