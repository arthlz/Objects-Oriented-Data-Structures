#include "euro.h"
#include <iostream>
using namespace std;

int main(){
    cout << "Testing the class Euro\n" << endl;
    Euro wholesale(20,50), retail;

    retail = wholesale;
    retail += 9.49;

    cout << "Wholesale price:"; wholesale.print(cout);
    cout << "Retail price:"; retail.print(cout);

    Euro discount(2.10);
    retail -= discount;
    
    cout << "\n---\nRetail price including discount: "; retail.print(cout);

    wholesale = 34.10;
    cout << "\nNew wholesale price: ";
    wholesale.print(cout);
    Euro profit(retail - wholesale);

    cout << "\nThe profit is:"; profit.print(cout);

    return 0;
}