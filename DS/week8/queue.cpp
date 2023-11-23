#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int value){
            data = value;
            next = nullptr;
        }
};

class Queue{
    Node* head;
    Node* tail;
    public:
        Queue(){
            head = nullptr;
            tail = nullptr;
        }

        void insert(int value){
            Node * newNode = new Node(value);
            if(!newNode){
                cout << "Queue Overflow" << endl;
            }
            if(!head){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = tail->next;
            }
        }

        int remove(){
            if(!head){
                cout << "Queue Underflow";
                return -1;
            }
            else{
                int value = head->data;
                Node* temp = head;
                head = head->next;
                free(temp);
                return value;
            }
        }

        void display(){
            Node * temp = head;
            while(temp){
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << endl;
        }
};


int main(){
    Queue q1;
    q1.insert(1);
    q1.insert(2);
    q1.insert(3);
    q1.insert(4);

    cout << "The Queue is ";
    q1.display();

    cout << "Removing " << q1.remove() << " we get" << endl;
    q1.display();

    cout << "Adding 69" << " we get " << endl;
    q1.insert(69);
    q1.display() ;

}