

#include <iostream>


template <typename T>
class Node {
public:
    T data;
    Node* next;
    Node* previous;
    Node(const T& val) : data(val), next(nullptr), previous(nullptr) {

    }
};


template <typename T >
class List {
private:
    Node<T>* head = nullptr;
    int capecity = 0;
public:
    void Next() {
        Node<T>* current = head;
        while (current != nullptr)
        {
            Node<T>* next = current->next;
            current = next;

        }
    }

    void Previous() {
        Node<T>* current = head;
        while (current !=nullptr)
        {
            Node<T>* previous = current->previous;
            current = previous;
        }
    }

    void push_back(const T& val) {
        Node<T>* Node1 = new Node<T>(val);
        Node1->next = head;
        Node1->previous = head;
        head = Node1;
        capecity++;
        Node<T>* current = head;
        std::cout << current->data;

    }
};


int main()
{

    List < int> a;
    a.Next();
    a.Previous();
    a.push_back(8);
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);


}
