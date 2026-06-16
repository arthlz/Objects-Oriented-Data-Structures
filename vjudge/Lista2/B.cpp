#include <iostream>
#include <string>

using namespace std;

// Vou implementar isso pra qualquer tipo
template <typename K, typename V>
class HashMap{
    private:
        struct Node{
        K key;
        V value;
        Node* next;

        Node(K ka, V va) : key(ka), value(va), next(nullptr) {};
        };
        Node** table;
        int capacity;
        int num_elements;

        // Função de hash customizada
        unsigned long get_hash(const K& key) const {
            unsigned long hash = 5381;
            for (size_t i = 0; i < key.length(); i++){
                hash = ((hash << 5) + hash) + key[i];
            }
            return hash;
        }

        void rehash(){
            int old_capacity = capacity;
            capacity *= 2;

            Node** new_table = new Node*[capacity];
            for (int i = 0; i<capacity;i++){
                new_table[i] = nullptr;
            }
            for (int i = 0; i < old_capacity; i++){
                Node* current = table[i];
                while (current!= nullptr){
                    Node* next_node = current->next;
                    int new_index = get_hash(current->key) % capacity;

                    current->next = new_table[new_index];
                    new_table[new_index] = current;

                    current = next_node;
                }
            }

            delete[] table;
            table = new_table;

        }


    public:

        // construtor
        HashMap(int cap = 10000) : capacity(cap), num_elements(0) {
            table = new Node*[capacity];
            for (int i = 0; i < capacity; i++){
                table[i] = nullptr;
            }
        };

        ~HashMap(){
            for (int i = 0; i < capacity; i++){
                Node* current = table[i];
                while (current != nullptr){
                    Node*temp = current;
                    current = current->next;
                    delete temp;
                }
            }
            delete[] table;
        }

        void insert(const K& key, const V& value){
            int index = get_hash(key) % capacity;
            Node* current = table[index];

            while (current != nullptr){
                if (current->key == key){
                    current->value = value;
                    return;
                }
                current = current->next;
            }

            Node* new_node = new Node(key, value);
            new_node-> next = table[index];
            table[index] = new_node;
            num_elements++;

            if (num_elements * 4 >= capacity * 3){ // capacity > 0.75
                rehash();
            }
        }

        bool contains(const K& key) const{
            int index = get_hash(key) % capacity;
            Node* current = table[index];
            while (current != nullptr){
                if (current->key == key) return true;
                current = current-> next;
            }
            return false;
        }

        V get(const K& key) const{
            int index = get_hash(key) % capacity;
            Node* current = table[index];
            while (current!= nullptr){
                if (current->key == key) return current->value;
                current = current->next;
            }
            return V();
        }

};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    std::string line;
    HashMap<string, string> df;

    while(getline(cin,line) && !line.empty()){

        int idx = -1;

        for (size_t i = 0; i<line.length(); i++){
            if (line[i] == ' '){
                idx = i;
                break;
            }
        }

        if (idx != -1) {
            string value = line.substr(0, idx);
            string key = line.substr(idx + 1);
            df.insert(key, value);
        }
    }

    std::string word;

    while(cin >> word){
        if (df.contains(word)){
            cout << df.get(word) << "\n";
        }else{
            cout << "eh\n";
        }
    }
    return 0;
}