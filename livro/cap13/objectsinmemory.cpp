#include "objects.h"
#include <iostream>
#include <string>

int main(){
    Account conta_arthur;
    conta_arthur.name = "Arthur";
    conta_arthur.nr = 12345;
    conta_arthur.balance = 103.23;

    Account conta_mae;
    conta_mae.name = "Socorro";
    conta_mae.nr = 67890;
    conta_mae.balance = 1234.12;
    
    conta_arthur.display();
    conta_mae.display();


    return 0;
}