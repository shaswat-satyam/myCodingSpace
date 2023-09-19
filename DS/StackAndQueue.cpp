            #include <iostream>
            using namespace std;

            class stack{
            int *arr;
            int top;
            int length;
            public:
            stack(){
                cout << "Enter the size of the stack:";
                cin >> length;
                arr = new int[length];
                top = -1;
            }
            int  pop(){
                if(top == -1){
                cout << "Stack Underflow!";
                return -1;
                }
                int result = arr[top];
                top--;
                return result;
            }
            void push(int item){
                if(top == length){
                cout << "Stack Overflow!";
                return;
                }
                top++;
                arr[top] = item;
            }
            
            int peek(){
                return arr[top];
            }

            void display(){
                cout << "Stack :";
                for(int i  = 0; i < top; i++){
                    cout << arr[i] << " -> ";
                }
                cout << arr[top] << endl;
            }
            };

            class queue{
                int * arr;
                int length;
                int head;
                int tail;
                public:
                queue(){
                    cout << "Enter the length of the queue:";
                    cin >> length;
                    arr = new int[length];
                    head = 0;
                    tail = -1;
                }
                
                void enqueue(int num){
                    
                    if(tail == length){
                        if(head == 0){
                            cout << "Queue Overflow!";
                            return;
                        }
                        else{
                            for(int i = 0;i < length-head;i++){
                                arr[i] = arr[i+head];
                            }
                        }
                    }
                    tail++;
                    arr[tail] = num;
                }
                
                int dequeue(){
                    if(head == tail){
                        cout << "Queue Underflow!";
                    }
                    int item = arr[head];
                    head++;
                    return item;
                }
                
                void reset(){
                    for(int i = 0;i < length;i++){
                        arr[i] = 0;
                    }
                    head = 0;
                    tail = -1;
                }
                
                void display(){
                    cout << "Queue :";
                    if(head == tail){
                        cout << "Empty Queue";
                        return;
                    }
                    for(int i  = head; i < tail-1; i++){
                        cout << arr[i] << " -> ";
                    }
                    cout << arr[tail-1] << endl;
                }

                int peek(){
                    return arr[head];
                }
                
            };
        int main(){
            stack s1;
            s1.push(1);
            s1.push(2);
            s1.push(3);
            s1.push(4);
            s1.push(5);
            

            s1.display();
            cout << "Stack after Popping " << s1.pop() << " ";
            s1.display();
            cout << "Stack after Popping " << s1.pop() << " ";
            s1.display();
            cout << "Stack after Popping " << s1.pop() << " ";
            s1.display();
            

        queue q1;
            q1.enqueue(1);
            q1.enqueue(2);
            q1.enqueue(3);
            q1.enqueue(4);
            q1.enqueue(5);
            
            q1.display();
            cout << "After dequeueing " << q1.dequeue() << " ";
            q1.display();
            cout << "After dequeueing " << q1.dequeue() << " ";
            q1.display();
            cout << "After dequeueing " << q1.dequeue() << " ";
            q1.display();
            cout << "After dequeueing " << q1.dequeue() << " " << endl;
            
        }