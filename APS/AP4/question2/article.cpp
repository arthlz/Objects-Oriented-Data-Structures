#include <iostream>
#include <iomanip>
#include "Article.h"

using namespace std;

int articleCount = 0;

Article::Article(long number, const std::string& name, double price){
    this->number = number;
    this->name = name;
    this->price = (price < 0.0) ? 0.0 : price;

    // Incrementar a quantidade 

    articleCount += 1;
    cout << "An object of type Article " << this->name << " was created." << endl;
    cout << "This is the " << articleCount << " Article.\n" << endl;
}

Article::~Article(){
    cout << "The object of type Article " << this->name << " was destroyed." << endl;
    articleCount--;

    cout << "There are still " << articleCount << " objects of type article.\n" << endl;
}

void Article::print(void){

    cout << "--PRODUTO NOVO --" <<
    "\nNome do produto:       " << name <<
    "\nQuantidade do produto: " << number << 
    "\nPreço:                 " << price << 
    "\nPress ENTER to continue" << endl;

    cin.get();

}
