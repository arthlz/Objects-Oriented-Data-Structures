#include <iostream>
#include <string>

using namespace std;

float x = 10.7F;

int main(){

    const int y = 10;

    const int &pointy = y; // não funciona : int &pointy = y;

    cout << pointy;

    float &rx = x;
    rx += 10; // x += 10 too
}