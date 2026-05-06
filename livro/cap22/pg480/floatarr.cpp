#include "floatArr.h"

// Implementação do construtor
FloatArr::FloatArr(int n) {
    max = n;
    cnt = 0;
    arrPtr = new float[max]; // Alocando a memória dinâmica
}

// Implementação do construtor com valor padrão
FloatArr::FloatArr(int n, float val) {
    max = n;
    cnt = n; // Se preenchemos com valor, o contador já é 'n'
    arrPtr = new float[max];
    for(int i = 0; i < max; i++) {
        arrPtr[i] = val;
    }
}

// Implementação do destrutor (MUITO IMPORTANTE para não vazar memória)
FloatArr::~FloatArr() {
    delete[] arrPtr;
}

// Implementação do append
bool FloatArr::append(float val) {
    if (cnt < max) {
        arrPtr[cnt] = val;
        cnt++;
        return true; // Sucesso
    }
    return false; // Array cheio
}

// ... e assim por diante para operator[] e remove ...