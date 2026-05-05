#include <iostream>

using namespace std;

class Quadrado{
    private:
        int x;


    public:
        Quadrado(int _x): x(_x) {};

        int getX(){return x;}
        virtual void setX(){this->x = x;}
        
        virtual void print(){std::cout << "That's a square";}

        int area(){return this->x * this->x;}
};

class Triangulo{

    private:
        int base;
        int altura;

    public:
        Triangulo(int _base, int _altura) : base(_base), altura(_altura) {};

        int getBase() {return base;}
        void setBase(int base) {this->base = base;}

        int getAltura() {return altura;}
        virtual void setaltura(int altura) {this->altura = altura;}

        virtual void print(){std::cout << "That's a triangle";}

        int area(){return (this->base * this->altura) / 2;}
        
};


