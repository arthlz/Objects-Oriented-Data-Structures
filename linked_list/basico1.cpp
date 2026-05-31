#include <iostream>
#include <string>

using namespace std;

class aluno{

    public: 
        int matricula;
        string nome;
        double nota;
        aluno *proximo;
};

int main(){

    aluno *i, *a, *p;  // i = início, a = ponteiro temporário, p = ponteiro de movimentação

    a = new aluno;
    i = a;
    a->matricula = 100;
    a->nome = "João";
    a->nota = 8.5;
    a->proximo = NULL;
    p = a;

    a = new aluno;
    p->proximo = a;
    a->matricula = 101;
    a->nome = "Tutu";
    a->nota = 7.0;
    a->proximo = NULL;
    p = a;

    p = i;

    while(p != NULL){
        cout << p->matricula << " / " <<
                p->nome << " / "      <<
                p->nota << " / "      << endl;
        p = p->proximo;
    }
        



    return 0;


}