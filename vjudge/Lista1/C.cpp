#include <iostream>
#include <string>

using namespace std;

struct Node{
    string val;
    Node* next;

    Node(string val){ // cada questão uma forma diferente de escrever isso aq
        this->val = val;
        this->next =nullptr;
    }
};

class Stack{
    private:
        Node* topNode;
    
    public:
        Stack(){
            this->topNode = nullptr;
        }
        ~Stack(){
            while(!isEmpty()){
                pop();
            }
        }

        string top(){
            if(!isEmpty()){
                return topNode-> val;
            }
            return "";
        }

        void pop(){
            if (!isEmpty()){
                Node* temp = topNode;
                topNode = topNode-> next;
                delete temp;
            }
            return ;
        }

        void push(string val){
            Node* newNode = new Node(val);
            newNode-> next = topNode;
            topNode = newNode;
        }

        bool isEmpty(){
            return this->topNode == nullptr; 
        }



};


int main(){

    string txt;

    while (cin >> txt){
        Stack pilha;
        string texto_end = "";  // o texto do ]
        string texto_home = ""; // o texto do [
        bool is_home = false;   // começa no end porque precisa abrir um colchete [ e quando for fechar o colchete isso se torna verdadeiro ]

        for (char c : txt){
            if (c == '[') {
                if (is_home){
                    pilha.push(texto_home);
                }else{
                    texto_end += texto_home;

                }

                texto_home = "";
                is_home=true;

            }
            else if(c== ']'){
                if(is_home){
                    pilha.push(texto_home);

                }else{
                    texto_end += texto_home;
                }
                texto_home = "";
                is_home = false;
            }

            else{
                texto_home += c;
            }
        }

        if (is_home){
            pilha.push(texto_home);

        }else{
            texto_end += texto_home;
        }

        while(!pilha.isEmpty()){
            cout << pilha.top();
            pilha.pop();
        }

        cout << texto_end << endl;
    }





    return 0;
}

