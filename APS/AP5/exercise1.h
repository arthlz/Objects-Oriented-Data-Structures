#ifndef FRACTION_H
#define FRACTION_H

class Fraction{
    private:
        long numerator;
        long denominator;

        void simplify();

    public:

        Fraction(long num = 0, long den = 1);

        // Operadores:

        Fraction operator-() const;
        Fraction &operator++();
        Fraction &operator--();
        Fraction &operator+=(const Fraction& other);
        Fraction &operator-=(const Fraction& other);
        Fraction &operator*=(const Fraction& other);
        Fraction &operator/=(const Fraction& other);

        //Operadores binários como friend

        friend Fraction operator+(const Fraction& a, const Fraction& b);
        friend Fraction operator-(const Fraction& a, const Fraction& b);
        friend Fraction operator*(const Fraction& a, const Fraction& b);
        friend Fraction operator/(const Fraction& a, const Fraction& b);

};

#endif