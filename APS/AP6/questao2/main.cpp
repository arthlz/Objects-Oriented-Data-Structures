#include "mini.h"
#include <iostream>


int main(){

    unsigned int arr[] = {30, 40, 50, 79, 26, 0};

    std::cout << "The smallest number in (30, 40, 50, 79, 26, 0) is: " << min(arr, (sizeof(arr)/sizeof(arr[0])));

    return 0;
}