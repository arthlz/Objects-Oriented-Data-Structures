#include "Exercise1.h"

int *splice(const int arr1[], int len1, const int arr2[], int len2, int pos){

    int len_total = len1+len2;
    int *result = new int[len_total];
    int k = 0;
    
    for (int i = 0; i < pos; i++){
        result[k] = arr1[i];
        k++; // vai ter pego os elementos de 1 até o corte;
    }

    for (int i = 0; i < len2; i++){
        result[k] = arr2[i];
        k++; // Vai ter pego todos os elementos de 2
    }

    for (int i = pos; i < len1; i++){
        result[k] = arr1[i];
        k++;
    }
    return result;
    
   

}