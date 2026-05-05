#include <iostream>
#include <string>

template <typename T, typename U>
auto max(T x, U y){
    return (x>y) ? x : y;
}

int main(){

    std::cout << max(1, 2.1) << '\n';

    const int size = 100;

    std::string arr[100];
    fill(arr, arr+100, "pizza");

    for (int i = 0; i < size; i++){
        std::cout << arr[i];
    }

    return 0;
}