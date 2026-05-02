#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    const int n_max = 1001;

    bool isprime[n_max];

    for (int i=2; i<= n_max; ++i){
        isprime[i] = true; // todos os números começam como primo
    }

    for (int i=2; i*i<= n_max; ++i){
        if (isprime[i]==true){
            for (int p = i*i; p <= n_max; p += i){
                isprime[p] =false;
            }
        }
    }
    int counter;

    for (int i = 2; i<=n_max; i++){
        if (isprime[i])
        {
            cout << i << " é um número primo" << "\n";
            counter++;
        }
        
    }

    cout << "Existem "<< counter <<" números abaixo de 1000 são: " << endl;
    return 0;
}