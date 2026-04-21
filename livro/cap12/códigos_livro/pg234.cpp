#include <iostream>
#include "pg234.h"

using namespace std;

int main(){

    float x = 11.1F;
    float y = 22.2F;

    swap(&x, &y);

    cout << "x = " << x << "\ny = " << y << endl;

    return 0;
}