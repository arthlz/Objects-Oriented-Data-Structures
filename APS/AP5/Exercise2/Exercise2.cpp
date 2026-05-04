#include "exercise2.h"
#include <iostream>
#include <cmath>
#include <cstdlib>

// Calcular o máximo divisor comum (gcd)

long gcd(long a, long b){
    a = std::abs(a);
    b = std::abs(b);

    while (b != 0){
        long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void Fraction::simplify(){
    long divisor = gcd(numerator, denominator);
    if (divisor > 1){
        numerator /= divisor;
        denominator /= divisor;
    }
}

// constructor
Fraction::Fraction(long num, long den) 
{
    if (den == 0){
        std::cerr << "Erro: O denominador não pode ser 0" << std::endl;
        std::exit(EXIT_FAILURE);
    }
    if (den < 0){
        numerator = -num;
        denominator = -den;
    }
    else{

        numerator = num;
        denominator = den;
    }
    simplify();

}

// Double

Fraction::operator double() const{
    return static_cast<double>(numerator) / denominator;
}
// (-)

Fraction Fraction::operator-() const{
    return Fraction(-numerator, denominator);
}

// (++)
Fraction& Fraction::operator++() {
    numerator += denominator;
    simplify();
    return *this;
}

// (--)
Fraction& Fraction::operator--() {
    numerator -= denominator;
    simplify();
    return *this;
}

// (+=)
Fraction& Fraction::operator+=(const Fraction& other){
    numerator = (numerator *other.denominator) + (other.numerator * denominator);
    denominator *= other.denominator;
    simplify();
    return *this;
}
// (-=)

Fraction& Fraction::operator-=(const Fraction& other){
    numerator = (numerator*other.denominator) - (other.numerator * denominator);
    denominator *= other.denominator;
    simplify();
    return *this;
}
// (*=)
Fraction& Fraction::operator*=(const Fraction& other) {
    numerator *= other.numerator;
    denominator *= other.denominator;
    simplify();
    return *this;
}

// (/=)
Fraction &Fraction::operator/=(const Fraction& other){
    if (other.numerator==0) {
        std::cerr << "Erro: divisão por zero não é permitido!" << std::endl;
        std::exit(EXIT_FAILURE);

    }
    long new_num = numerator*other.denominator;
    long new_den = denominator *other.numerator;

    if (new_den < 0) {
        numerator = -new_num;
        denominator = new_den;

    } else {
        numerator = new_num;
        denominator = new_den;

    }
    simplify();
    return *this;
}

// funções friend (amigas)
Fraction operator+(const Fraction& a, const Fraction& b){
    Fraction result = a;
    result += b;
    return result;
}

Fraction operator-(const Fraction& a, const Fraction& b){
    Fraction result = a;
    result -= b;
    return result;
}

Fraction operator*(const Fraction &a, const Fraction& b){
    Fraction result = a;
    result *= b;
    return result;
}

Fraction operator/(const Fraction& a, const Fraction& b){
    Fraction result = a;
    result /= b;
    return result;

}
// Input (>> e <<)
std::istream& operator>>(std::istream& is, Fraction& f) {
    long num, den;
    char slash; // Para ler a barra '/'
    
    is >> num >> slash >> den;
    
    if (den == 0) {
        std::cerr << "Erro fatal: O denominador não pode ser zero!" << std::endl;
        std::exit(EXIT_FAILURE);
    }
    
    if (den < 0) {
        f.numerator = -num;
        f.denominator = -den;
    } else {
        f.numerator = num;
        f.denominator = den;
    }
    f.simplify();
    
    return is;
}

std::ostream& operator<<(std::ostream& os, const Fraction& f) {
    os << f.numerator << "/" << f.denominator;
    return os;
}