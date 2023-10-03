#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * prev;
        Node * next;
        
        Node(int value){
            data = value;
            prev = nullptr;
            next = nullptr;
        }
};

class doublyLinkedList{
    Node * head;
    Node * tail;
    public:
    doublyLinkedList(){
        head = nullptr;
        tail = nullptr;
    }
    
    void prepend(int value){
        Node * newNode = new Node(value);
         if(!head){
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }


    
    void display(){
        Node * curr = head;
        while(curr){
            cout << curr->data << " <--> ";
            curr = curr->next;
        }
        cout << "null" << endl;
    }
    
    void remove(){
        Node * temp = tail;
        tail = tail->prev;
        tail->next = nullptr;
        free(temp);
    }
};


int main() {
    // Write C++ code here
    doublyLinkedList dll;
    cout << "Creation of a Linked List" << endl;
    dll.prepend(1);
    dll.prepend(2);
    dll.prepend(3);
    dll.prepend(4);
    dll.prepend(5);
    dll.display();
    
    
    cout << "Removing the last Node" << endl;
    dll.remove();
    dll.display();

    return 0;
}