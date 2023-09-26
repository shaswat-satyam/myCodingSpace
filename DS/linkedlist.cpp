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

class linkedList{
    Node* head;
    Node* tail;

    public:
        linkedList(){
            head = nullptr;
            tail = nullptr;
        }

        void display(){
            Node* curr = head;
            int idx = 0;
            cout << "Index: ";
            while(curr){
                cout << idx++ << "    ";
                curr = curr->next;
            }
            cout << endl << "Value: ";
            curr = head;
            while(curr){
                if(curr->next){
                    cout << curr->data << " -> ";
                }
                else{
                    cout << curr->data;
                }
                curr = curr->next;
            }
            cout << endl << endl;
        }

        void append(int data){
            Node* newNode = new Node(data);
            if(tail){
                tail->next = newNode;
                tail = tail -> next;
            }
            else{
                tail = newNode;
                head = newNode;
            }
        }

        void prepend(int data){
            Node* newNode = new Node(data);
            if(head){
                newNode->next = head;
                head = newNode;
            }
            else{
                tail = newNode;
                head = newNode;
            }
        }

        void insert(int data, int idx){
            Node* curr = head;
            Node* newNode = new Node(data);
            
            curr = head;
            while(--idx){
                curr = curr->next;
                if(!curr){
                    cout << "Index is out of bounds!" << endl;
                    return;
                }
            }
            newNode->next = curr->next;
            curr->next = newNode;
        }

        void reverse(){
            Node * prev = nullptr;
            Node * curr = head;
            Node * next = nullptr;
            while (curr != NULL) {
            // Store next
                next = curr->next;
                // Reverse current node's pointer
                curr->next = prev;
                // Move pointers one position ahead.
                prev = curr;
                curr = next;
            }
            head = prev;
        }
};

int main(){
    linkedList l1;
    cout << "The Initial Linked List" << endl;
    l1.append(1);
    l1.append(2);
    l1.append(3);
    l1.append(4);
    l1.append(5);    
    l1.display();
    
    cout << "Appending 69 to the Linked List" << endl;
    l1.append(69);
    l1.display();
    
    cout << "Prepending 420 to the Linked List" << endl;
    l1.prepend(420);
    l1.display();

    cout <<"Inserting 9 at position 3 in the Linked List" << endl;
    l1.insert(9,3);
    l1.display();

    cout <<"Reversing the Linked List" << endl;
    l1.reverse();
    l1.display();
}