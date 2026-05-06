#ifndef CLASSEABSTRATA_H

#define CLASSEABSTRATA_H

#include <iostream>
#include <cmath>
#include <string>
#include <stdexcept>


// Forma geométrica

class Forma{
    protected:
        std::string nome;

    public:
        Forma(std::string _n) : nome(_n){};

        virtual ~Forma() = default;

        virtual double area() const = 0;
        virtual double perimetro() const = 0;

        virtual std::string descricao() const{
            return "[" + nome +"] | Area: " + std::to_string(area()) + " | Perímetro: " + std::to_string(perimetro()); 
        }

        std::string getNome() const{return nome;}


};

// Retangulo

class Retangulo : public Forma{

    private:
        double largura;
        double altura;

    public:
        Retangulo(const std::string& _nome, double _largura, double _altura) : Forma(_nome), largura(_largura), altura(_altura) {
            if (largura <= 0 || altura <= 0){
                throw std::invalid_argument("Largura e altura não podem ser menor que 0");
            } 
        };

        double area() const {return this->largura * this->altura;}
        
        double perimetro() const {return this->largura*2 + this->altura *2;}

        bool quadrado() const {
            if (largura == altura){
                return true;
            }else{
                return false;
            }
            
        }

        virtual std::string descricao() const override {return Forma::descricao() + (quadrado() ? "| é um quadrado" : "");}


        // Sobrecarga de operadores do retângulo

        Retangulo operator+(const Retangulo& other) const{
            return Retangulo(this->nome + "+" + other.nome, this->largura + other.largura, this->altura + other.altura);
        }

        Retangulo operator*(double factor) const {
            if (factor <= 0) throw std::invalid_argument("não é possível multiplicar por um valor negativo em figuras geométricas");

            return Retangulo(
                this->nome,
                this->largura * factor,
                this->altura * factor
            );

        }

        Retangulo& operator*=(double factor) {
            if (factor <= 0) throw std::invalid_argument("Não é possível multiplicar por um valor negativo em figuras geométricas.");
            else{
                this->largura *= factor;
                this->altura *= factor;
                return *this;
            }
        }

        // comparação de área (==)

        bool operator==(const Retangulo& other){
            return other.area() == this->area();
        }

        // Comparação < e >
        bool operator<(const Retangulo& other){
            return this->area() < other.area();
        }
        bool operator>(const Retangulo& other){
            return this->area() > other.area();
        }

        friend std::ostream& operator<<(std::ostream& os, const Retangulo& r){
            os << r.descricao();
            return os;
        }

};





// Círculo
class Circulo : public Forma{

    private:
        double raio;

    public:

        Circulo(const std::string& _nome, double _raio) : Forma(_nome), raio(_raio) {
            if (raio <= 0){
                throw std::invalid_argument("O raio deve ser maior que 0.");
            }
        }; // construtor

        double area() const {return 3.141519* this->raio *this->raio;}

        double perimetro() const {return 2*3.141519*this-> raio;}

        virtual std::string descricao() const override {return Forma::descricao();}

        // Sobrecarga de operadores;

        // (Somar dimensões)
        Circulo operator+(const Circulo& other){
            return Circulo(this->nome + " e " + other.nome, this->raio + other.raio);
        }

        Circulo operator*(double factor){
            if (factor <= 0){std::invalid_argument("A área não pode ser negativa");}
            return Circulo(this->nome, this->raio * factor);
        }

        Circulo operator*=(double factor){
            if (factor <= 0){std::invalid_argument("A área não pode ser negativa");}
            this->nome = nome;
            this->raio = raio*factor;
            return *this;
        }

        bool operator==(const Circulo& other){
            return this->area() == other.area();
        }

        bool operator>(const Circulo& other){
            return this->area() > other.area();
        }

        bool operator<(const Circulo& other){
            return this->area() < other.area();
        }

        friend std::ostream& operator<<(std::ostream& os, const Circulo &circ){
            os << circ.descricao();
            return os;
        }


};

template<typename T, typename U>
class Par{

    private:
        T primeiro;
        U segundo;

    public:
        Par(T _p, U _s) : primeiro(_p), segundo(_s) {};

        T getPrimeiro() const {return primeiro;};
        U getSegundo() const {return segundo;};

        void setPrimeiro(T valor){
            this->primeiro = valor;
        }

        void setSegundo(U valor){
            this->segundo = valor;
        }

        Par<U,T> invertido() const{
            return Par<U,T>(segundo, primeiro);
        }

        friend std::ostream& operator<<(std::ostream &os, const Par<T,U>& p){
            os << "(" << p.getPrimeiro() << "," << p.getSegundo() << ")" << std::endl;

            return os;
        }

};

#endif