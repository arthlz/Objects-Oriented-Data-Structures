#include "floatArr.h"
#include <iostream>

using namespace std;

int main()
{
    FloatArr v(10);
    FloatArr w(20, 1.0F);

    v.append(0.5F);

    cout << "Current number of elements in v: " << v.length() << endl;
    cout << "Current number of elements in w: " << w.length() << endl;

    
    return 0;


}