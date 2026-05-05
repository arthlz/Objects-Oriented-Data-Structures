#include "Exercise1.h"
#include <iostream>

int main(){

    const int array1[] = {5, 3, 4, 6, 7};
    const int array2[] = {30, 24, 12, 14, 16};

    int len1 = sizeof(array1)/sizeof(array1[0]);
    int len2 = sizeof(array2)/sizeof(array2[0]);

    int tamanho = len1 +len2;
    int pos = 4;
    
    int *res = splice(array1, len1, array2, len2, pos);

    for (int i = 0; i < tamanho; i++){
        std::cout << "Na posição " << i+1 << " temos o valor: " << res[i] << "\n";
    }




    return 0;

}