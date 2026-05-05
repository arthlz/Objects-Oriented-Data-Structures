#include "merges.h"
#include <iostream>

int main(){

    const int arr1[] = {3,6,7,5,41};
    const int arr2[] = {19,23,35,5,6};

    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    int tm_total = len1+len2;

    int *res = merge(arr1, len1, arr2, len2);

    for (int i = 0; i < tm_total; ++i){
        std::cout << "The number " << i + 1 << " is equal to " << res[i] << '\n';
    }

    delete[] res;


    return 0;
}