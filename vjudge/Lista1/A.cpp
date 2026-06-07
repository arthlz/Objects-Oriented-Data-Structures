#include <iostream>
#include <string>

using namespace std;

struct Node{
    int val;
    Node* next;

    Node(int val) : val(val) , next(nullptr) {};
};

class Queue{

    private:
        Node* frontNode;
        Node* rearNode;

    public:

        bool isEmpty(){
            return frontNode == nullptr;
        }

        Queue(){
            frontNode = nullptr;
            rearNode = nullptr;
        }

        ~Queue(){
            while (!isEmpty()){
                dequeue();
            }
        }

        void dequeue(){
            if (isEmpty()){
                return;
            }
            Node* temp = frontNode;
            frontNode = frontNode->next;

            if (frontNode == nullptr){
                rearNode = nullptr;
            }

            delete temp;
        }

        void enqueue(int val){
            Node* newNode = new Node(val);
            if (rearNode == nullptr){
                frontNode = rearNode = newNode;
                return ;
            }
            rearNode-> next= newNode;
            rearNode = newNode;
        }

        int front(){
            return frontNode->val;
        }
};


int main(){
    int casos;
    cin >> casos;

    if (casos == 0) { 
        return 0;     
    }
    else{
        while (casos--){
        int l, m;

        cin >> l >> m;

        l *= 100; // O L é dado em M, então precisa virar centímetro

        Queue left_queue;
        Queue right_queue;

        for (int i = 0; i < m; i++){
            int car_len; // o comprimento do carro é daod em cm
            string bank; // banco que o carro chega - left ou right(esquerda/direita)

            cin >> car_len >> bank;

            if (bank == "left"){
                left_queue.enqueue(car_len);
            }else{
                right_queue.enqueue(car_len);
            }
        }

        int idas = 0;
        bool is_left = true; // Se não for na esquerda, false e é direita e também começa na esquerda
    

        while (!left_queue.isEmpty() || !right_queue.isEmpty()){
            int current_len = 0; // n~ao pode passar do limite estipulado no input em l


            if (is_left){
                while(!left_queue.isEmpty() && current_len + left_queue.front() <= l){
                    current_len += left_queue.front();
                    left_queue.dequeue();
                }
            }else{
                while (!right_queue.isEmpty() && current_len + right_queue.front() <= l){
                    current_len += right_queue.front();
                    right_queue.dequeue();
                }
            }

            idas ++;
            is_left = !is_left; // Só troca a ordem, um esquerda e um direita

        }

        cout << idas << "\n";
    
        }
    } 
   




    return 0;
    
}
