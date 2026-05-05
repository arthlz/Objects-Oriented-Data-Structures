#include <iostream>

int main(){

    char *pGrades = nullptr;

    int size;
    std::cout << "How many grades you want to enter in?: ";
    std:: cin >> size;


    pGrades = new char[size];
    
    for (int i =0; i < size; i++){

        std::cout << "Enter grade number " << i +1 << ": ";
        std::cin >> pGrades[i]; 
    }

    for (int i =0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;




    return 0;
}