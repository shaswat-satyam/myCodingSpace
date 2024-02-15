class Queue{
    Node head;
    Node tail;
    Queue(){
        head = null;
        tail = null;
    }

    Queue(int val){
        Node newNode = new Node(val);
        head = newNode;
        tail = newNode;
    }
    
    boolean isEmpty(){
        return head == null;
    }

    boolean isFull(){
        Node newNode = new Node();
        return newNode == null;
    }
    void enqueue(int val){
        if(isFull()){
            System.out.println("Error! Queue Overflow");
            return;
        }
        Node newNode = new Node(val);
        if(tail == null){
            tail = newNode;
            head = newNode;
            return;
        }
        tail.next = newNode;
        tail = tail.next;
    }

    int dequeue(){
        if(isEmpty()){
            System.out.println("Error! Queue Underflow");
            return -1;
        }
        int result = head.value;
        head = head.next;
        return result;
    }

    void display(){
        Node temp = head;
        while(temp != null){
            System.out.print(Integer.toString(temp.value) + " -> ");
            temp = temp.next;
        }
        System.out.println("X");
    }
}