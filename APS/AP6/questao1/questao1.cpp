#include "Questao1.h"

int* splice(const int arr1[], int len1, const int arr2[], int len2, int pos){

    int total_len = len1+len2;

    int* result = new int[total_len];

    int k = 0;

    for (int i = 0; i < pos; i++){
        result[k] = arr1[i];
        k++;
    }

    for (int i = 0; i < len2; i++){
        result[k] = arr2[i];
        k++;
    }

    for (int i = pos; i < len1; i++){
        result[k] = arr1[i];
        k++;
    }

    return result;
}

