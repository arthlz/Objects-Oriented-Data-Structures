#ifndef ARTICLE_H
#define ARTICLE_H
#include <string>

class Article{

    private:
        long number;
        std::string name;
        double price;

    public:
        Article(long number=0, const std::string& name="", double price=0.0);

        ~Article();
        void print(void);

        long getNumber(){
            return number;
        }
        void setNumber(long number){
            this->number = number;
        }

        std::string& getName(){
            return name;
        }
        void setName(std::string& name){
            this->name = name;
        }

        double getPrice(){
            return price;
        }

        void setPrice(double price){
            this->price=(price < 0.0) ? 0.0 : price;
        }
};



#endif