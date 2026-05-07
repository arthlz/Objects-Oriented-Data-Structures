#ifndef NODE_H
#define NODE_H

template<class T>
class Node{
    private:
        T value;
        Node* next;

    public:
        Node(T v, Node *n);
        T get_value();
        Node* get_next();

};


#endif