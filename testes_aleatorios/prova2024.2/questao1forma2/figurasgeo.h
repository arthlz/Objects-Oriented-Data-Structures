#ifndef FIGURASGEO_H
#define FIGURASGEO_H

#include <iostream>


class FiguraGeometrica{
    private:
        int x;
        int y;
        

    public:
        FiguraGeometrica(int _x, int _y) : x(_x), y(_y) {};
        virtual ~FiguraGeometrica() {}

        int get_x(){return x;}
        int get_y(){return y;}

};

class Quadrado : public FiguraGeometrica{
    private:
        int lado;

    public:
        Quadrado(int _x, int _y, int l) : FiguraGeometrica(_x, _y), lado(l) {};

        virtual int get_lado(){return this->lado;}
        virtual int area(){return this->lado * this->lado;}
    
};

class Triangulo : public FiguraGeometrica{
    private:
        int base;
        int altura;

    public:
        Triangulo(int _x, int _y, int b1, int h1) : FiguraGeometrica(_x, _y), base(b1), altura(h1) {};
        
        virtual int get_base(){return this->base;}
        virtual int get_altura(){return this->altura;}

        virtual double area(){return (this->base * this->altura) / 2;}

};
#endif