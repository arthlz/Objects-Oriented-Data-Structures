#include <iostream>
#include <string>

struct Hash{
    std::string key;
    bool ocupado = false;
};

int getPos(int Hash, int j){
    return (Hash + (j*j) + 23*j) % 101;
}

int calculate(std::string Hash){
    long long h = 0;
    for (int i = 0; i < Hash.length(); i++){
        h += (Hash[i] * (i+1));
    }
    return (h*19) % 101;
}

void insert(Hash table[], std::string key){
    int h = calculate(key);

    // Verificação da existÊncia
    for (int j = 0; j < 20; j++){ // 20 é o número q tem lá na questão
        int pos = getPos(h, j);
        if (table[pos].ocupado && table[pos].key == key) return;
    }

    for (int i = 0; i < 20; i++){
        int pos = getPos(h,i);
        if (!table[pos].ocupado){
            table[pos].key = key;
            table[pos].ocupado = true;
            return;
        }
    }
}

void erase(Hash table[], std::string key){
    int h = calculate(key);

    for (int i = 0; i < 20; i++){
        int pos = getPos(h,i);
        if (table[pos].ocupado && table[pos].key == key){
            table[pos].ocupado = false;
            return;
        }
    }

}

void resolve(){
    Hash table[101] = {};

    int operations;
    std::cin >> operations;

    for (int i = 0; i < operations; i++){
        std::string line;
        std::cin >> line;

        std::string add_or_del = line.substr(0,3);

        std::string key = line.substr(4);
        int h = calculate(key);

        if (add_or_del == "ADD"){
            insert(table,key);
        }else if (add_or_del == "DEL"){
            erase(table,key);
        }
    }
    
    int count = 0;
    for (int i = 0; i < 101; i++){
        if (table[i].ocupado){
            count++;
        }
    }

    std::cout << count << "\n";

    for (int i = 0; i < 101; i++){
        if (table[i].ocupado){
            std::cout << i << ":" << table[i].key << "\n";
        }
    }


}

int main(){

    int casos;
    std::cin >> casos;

    while (casos--){
        resolve();
    }
    return 0;
}