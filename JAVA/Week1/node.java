class Node{
    int value;
    Node next;
    Node(){
        value = 0;
        next = null;
    }
    Node(int val){
        value = val;
        next = null;
    }
    Node(int val, Node next){
        this.value = val;
        this.next = next;
    }
}