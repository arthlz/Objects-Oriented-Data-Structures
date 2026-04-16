#include <string>
#include <iostream>

using namespace std;

namespace MySpace{
    std::string mess = "Within namespace MySpace";
    int count = 0;
    double f(double);
}

namespace YourSpace{
    std::string mess = "Within namespace Yourspace";

    void f(){
        std::cout << "Mess + 1";
        mess += '!';
    }
}

namespace MySpace
{
    void g(){
        cout << "Executing MySpace::g() " << endl;
    };

    double f(double y)
    {
        return y / 10.0;
    }

}

int main(){
    std::cout << "Testing namespaces!\n\n" << MySpace::mess << std::endl;

    MySpace::g();
    std::cout << "\nReturn value f(): " << MySpace::f(1.2) << "\n-------------" 
    << endl;

    YourSpace::f();
    cout << YourSpace::mess << endl;
    return 0;
}