#include <iostream>
#include <string>

using namespace std;

float x = 10.7F;

int main(){
    const float rx = x;

    cout << "rx = " << rx << " and x = " << x << endl;

    x += 20;

    cout << "now rx = " << rx << " and x = " << x << endl;

    string str = "I'm a constant";

    string ing = str;

    ing +=" comida";

    string& text = ing;

    cout << "ing = " << ing << " and str = " << str << " and text = " << text;

    text += " 2+2";

    cout << "ing = " << ing << " and str = " << str << " and text = " << text;

    return 0;


    
}