#include "artigo.h"
#include <iostream>

using namespace std;

int Article::articleCount = 0;

Article::Article(long number, std::string name, double price){
    this->number = number;
    this->name = name;
    this-> price = (price<0.0) ? 0.0 : price;

    articleCount++;

    cout << "An object of type Article " << name << " is created" << endl;
    cout << "This is the " << articleCount << " Article" << endl;
}

// Copy Constructor

Article::Article(const Article& original)
    :number(original.number), name(original.name), price(original.price)
{
    articleCount++;
    cout << "[Copy] a copy of Article " << this->name << " is created" << endl;
}

Article::~Article(){
    articleCount--;
    cout << "[Destructor] Article: " << this-> name << " is destroyed. Still " << articleCount << " left" << endl;
}

void Article::print() const{
    cout << "-> " << name << " (ID: " << number << ") - $" << price << endl;
}