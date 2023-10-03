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
    
    void append(int value){
        Node * curr = head;
        Node * newNode = new Node(value);
        if(!head){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    
    void display(){
        Node * curr = head;
        while(curr){
            cout << curr->data << " <--> ";
            curr = curr->next;
        }
        cout << "null" << endl;
    }
    
    void remove(int key){
        Node * curr = head;
        int flag = 0;
        while(curr){
            if(curr->data == key){
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
                flag = 1;
                free(curr);
            }
            curr = curr->next;
        }
        if(!flag){
            cout << "Element "<< key << " not found is the list" << endl;
        }
    }
};


int main() {
    // Write C++ code here
    doublyLinkedList dll;
    cout << "Creation of a Linked List" << endl;
    dll.append(1);
    dll.append(2);
    dll.append(3);
    dll.append(4);
    dll.append(5);
    dll.display();
    
    
    
    cout << "Removing the Node with 2 Data" << endl;
    dll.remove(2);
    dll.display();

    cout << "Trying to remove 69" << endl;
    dll.remove(69);
    dll.display();

    return 0;
}