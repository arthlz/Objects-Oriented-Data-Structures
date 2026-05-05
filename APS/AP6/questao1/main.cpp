#include <iostream>
#include "Questao1.h"

using namespace std;


int main(){

    const int array1[] = {1,2,3,4,5};
    int len1 = sizeof(array1)/sizeof(array1[0]);

    const int array2[] = {6,7,8,9,10};
    int len2 = sizeof(array2)/sizeof(array2[0]);

    int pos = 7;

    int* ret = splice(array1, len1, array2, len2, pos);

    int tamanho = len1+len2;

    for (int i = 0; i < tamanho; i++){
        cout << "Na posição " << i << " temos o número: " << ret[i] << "\n";
    }

    delete[] ret;


    return 0;
}