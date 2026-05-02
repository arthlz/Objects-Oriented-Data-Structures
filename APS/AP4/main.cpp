#include <iostream>
#include "Date.h"

using namespace std;

int main(){

    cout << "--Teste de algumas coisas--" << endl;

    Date date1;
    Date date2;

    date1.init();
    cout << "Data atual (date1): "; date1.print();

    date2.init(25,12,2025);
    cout << "Data do natal de 2025(Date2): "; date2.print();

    cout << "Teste de atribuição de objetos: " << endl;

    date2 = date1;
    cout << "Atribuição de objetos da date2 para date1: "; date2.print();

    cout << "\n";
    cout << "\n---Teste de ponteiros e referências---" << endl;

    Date *ptrDate = &date1;
    cout << "\nprint via ponteiro (->): "; ptrDate->print();

    Date &refDate = date2;

    refDate.init(1, 1, 2026);

    cout << "imprimindo via referência (date 2 alterado via refdate): ";
    refDate.print();

    cout << "Imprima date2 no final: ";
    date2.print();


    return 0;

}