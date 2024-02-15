class Stack{
    Node head;
    Stack(){
        head = null;
    }

    Stack(int val){
        head = new Node(val);
    }
    boolean isEmpty(){
        return head == null;
    }
    boolean isFull(){
        Node newNode = new Node();
        return newNode == null;
    }

    void push(int val){
        if(isFull()){
            System.out.println("Error! Stack Overflow");
            return;
        }
        Node newNode = new Node(val);
        newNode.next = head;
        head = newNode;
    }
    
    int pop(){
        if(isEmpty()){
            System.out.println("Error! Stack Underflow");
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