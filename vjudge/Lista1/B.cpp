#include <iostream>
#include <string>

using namespace std;


struct Node{
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = nullptr;

    }
};

class Stack{
    private:
        Node* topNode;

    public:
        Stack(){
            topNode = nullptr;
        }

        ~Stack(){
            while (!isEmpty()){
                pop();
            }
        }

        // Desempilhar
        void pop(){
            if (isEmpty()){
                return;
            }
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp;
        }

        // Empilhar
        void push(int val){
            Node* newNode = new Node(val);
            newNode->next = topNode;
            topNode = newNode;
        }

        int top(){
            if (!isEmpty()){
                return topNode->val;
            }
            return -1;
        }

        bool isEmpty(){
            return topNode == nullptr;
        }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    while (n != 0){
        while (true){
            int f_val;
            cin >> f_val;

            if (f_val == 0){
                break;
            }

            int arr[1000];
            arr[0] = f_val;

            for (int i = 1; i < n; i++){
                cin >> arr[i];
            }

            Stack pilha;
            
            // testar se é possível fazer a pilha ou não
            int contagem = 1;
            bool possible = true;

            for (int i = 0; i< n; ++i){
                int vagao = arr[i];

                while (contagem <= n && (pilha.isEmpty() || pilha.top() != vagao)){
                    pilha.push(contagem);
                    contagem++;
                }

                if (!pilha.isEmpty() && pilha.top() == vagao) {
                    pilha.pop();
                }
                else{
                    possible = false;
                    break;

                }
            }

            if (possible){
                std::cout << "Yes\n";
            }else {
                std::cout << "No\n";
            }

        }
        cout << "\n";
        cin >> n;
    }

    return 0;
}
