#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "Digite a quantidade de notas: ";
    cin >> n;

    // Reservar na heap
    float* notas = new float[n];

    for (int i = 0; i < n; i++){
        cout << "Digite a nota: " << i+1 << ":";
        cin >> notas[i];
    }

    cout << "Exibição das notas registradas:\n";
    for (int i = 0; i < n; i++){
        cout << "Nota " << i+1 << ": " << notas[i] << "\n";
    }

    delete[] notas;

    return 0;
}