#include <iostream>


// class base
class Square{

    private:
        int x;

    public:
        Square(int _x) : x(_x) {};

        int getX() const {return x;}
        void setX() {this->x = x;}
        virtual void print() const {std::cout << "Square!\n";}

};

class Rectangle : public Square{
    private:
        int h;

    public:
        Rectangle(int _x, int _h) : Square(_x) {h = _h;}
        int getH() const {return h;}

        void setH() {this->h = h;}
        void print() const {std::cout << "Rectangle!\n";}

};

void foo(const Square& s)
{
    std::cout << s.getX() << "\n";
    s.print();
}

int main(){

    Square s(7);
    Rectangle r(2,3);

    Square* sptr = &r;

    sptr->print();

    foo(s);
    foo(r); // that's also possible, 'cause the rectangle is a square too, beacuse of polymorphism






    return 0;
}