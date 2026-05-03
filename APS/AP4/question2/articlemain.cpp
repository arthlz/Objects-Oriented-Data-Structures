#include "Article.h"
#include <iostream>

using namespace std;


Article globalArticle(100, "Monitor", 500.0);

void test(){
    cout << "--Enter test function--" << endl;

    Article localObj(300, "Mousezinho", 25.50);

    static Article staticObj(400, "Teclado estático mecânico", 120.0);

    localObj.print();
    staticObj.print();
    cout << "fim da test() function\n" << endl;

}

int main(){

    cout << "Main function: " << endl;

    Article mainArticle(200, "Cadeira Main", -50.0);

    mainArticle.print();

    cout << "Modify main article price..." << endl;

    mainArticle.setPrice(350.0);
    mainArticle.print();

    test();
    test();

    cout << "Exiting main function." << endl;

    return 0;
}