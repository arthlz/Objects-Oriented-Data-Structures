#include <iostream>
#include <iomanip>

using namespace std;



int main(){ 
    string word, inverse;
    bool reverse = false;
    
    cout << "Give me a word: ";
    cin >> word;

    int tamanho = word.length();

    for(int i = 0; i < tamanho; ++i){
        inverse += (word[tamanho -1 -i]);
    }

    reverse = true;
    cout << "The word " << word << " and the word " << inverse << " are palindroms." << endl; 


    return 0;
}