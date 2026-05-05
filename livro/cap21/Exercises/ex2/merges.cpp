#include "merges.h"

int* merge(const int arr1[], int len1, const int arr2[], int len2){

    int tam_total = len1 + len2;

    int *result = new int[tam_total];

    int k = 0;

    for (int i=0; i<len1; i++){
        result[k] = arr1[i];
        k++;
    }

    for (int i = 0; i<len2; i++){
        result[k] = arr2[i];
        k++;
    }

    return result;


}