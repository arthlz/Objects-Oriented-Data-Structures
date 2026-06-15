struct Node{
    int key;
    std::string value; // nome
    Node* next;
    Node(int k, std::string v, Node* n) : key(k), value(v), next(n) {};

};

class HashMap{
    private:
        Node** table; // Array dos ponteiros
        int buckets;
        int num_elements;

        int hash_function(int key) const {
            return key % buckets;
        }

    public:
        HashMap(int bck): buckets(bck), num_elements(0){
            table = new Node*[buckets];
            for (int i = 0; i < buckets; i++){table[i] = nullptr;}
        }


        void clear(){
            for (int i = 0; i < buckets; i++){
                Node* current = table[i];
                while (current != nullptr){
                    Node*temp = current;
                    current = current->next;
                    delete temp;
                }
                table[i] = nullptr;
                
            }
            num_elements = 0;
        }
        ~HashMap(){
            clear();
            delete[] table;
        }


        std::string find(int key) const{ // Também chamado de at;
            int index = hash_function(key);
            Node* current = table[index];

            while (current != nullptr){
                if (current->key == key){
                     return current->value;
                }
                current = current->next;
            }
            throw std::out_of_range("Key not found");
        }


        bool erase(int key){
            int index = hash_function(key);
            Node* current = table[index];
            Node* prev = nullptr;

            while (current != nullptr){
                if (current->key == key){
                    if (prev = nullptr){
                        table[index] = current->next;
                    }else{
                        prev->next = current->next;
                    }
                    delete current;
                    num_elements--;
                    return true;
                }
                prev = current;
                current = current->next;
            }
            return false;
        }

};