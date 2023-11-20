    #include <iostream>
    using namespace std;

    class Node{
        public:
            int data;
            Node * next;
            Node(int value){
                data = value;
                next = nullptr;
            }
    };

    class List{
        public:
            Node * head;

            virtual void store(int value){
                return;
            }

            virtual int retrive(){
                return 0;
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

    class Stack : public List{
        public:
        
        Stack(){
            head = nullptr;
        }
        
        void store(int value){
            Node * temp = head;
            if(!head){
                head = new Node(value);
            }
            else{
                Node * newNode = new Node(value);
                newNode->next = head;
                head = newNode;
            }
        }

        int retrive(){
            int value;
            Node * temp;
            if(head){
                temp = head;
                head = head->next;
                value = temp->data;
                free(temp);
                return value;
            }
            else{
                return -1;
            }
        }
    };

    class Queue : public List{
        public:

        Queue(){
            head = nullptr;
        }

        void store(int value){
            Node * temp = head;
            if(!head){
                head = new Node(value);
            }
            else{
                Node * newNode = new Node(value);
                newNode->next = head;
                head = newNode;
            }
        }

        int retrive(){
            int value;
            Node * temp;
            if(head){
                temp = head;
                while(temp->next->next){
                    temp = temp->next;
                }
                Node * curr = temp->next;
                temp->next = nullptr;
                value = curr->data;
                free(curr);
                return value;
            }
            else{
                return -1;
            }
        }
    };


    int main(){
        Stack s1;
        s1.store(1);
        s1.store(2);
        s1.store(3);
        cout << "The Stack is" << endl;
        s1.display();
        cout << "After removing "<< s1.retrive() << endl;
        s1.display();

        cout << endl;

        Queue q1;
        q1.store(1);
        q1.store(2);
        q1.store(3);
        cout << "The Queue is" << endl;
        q1.display();
        cout << "After removing "<< q1.retrive() << endl;
        q1.display();

        return 0;
    }