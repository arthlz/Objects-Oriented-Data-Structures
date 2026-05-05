#include "mini.h"
#include <iostream>

unsigned int min(unsigned int* arr, unsigned int size){

    unsigned int minimum = 1000000000;

    for (int i = 0; i < size-1; i++){
        if (arr[i] < minimum){
            minimum = arr[i];
        }
    }

    return minimum;
}
