public class usage{
    public static void main(String[] args) {
        Stack s1 = new Stack();
        System.out.println("Usage of Stack:");
        s1.push(1);
        s1.push(5);
        s1.push(6);
        s1.push(3);
        s1.push(4);
        s1.push(9);
        s1.display();
        System.out.println(Integer.toString(s1.pop())+" has been popped");
        s1.display();
        System.out.println("");

        Queue q1 = new Queue();
        System.out.println("Usage of Queue");
        for(int i = 0; i < 5;i++){
            q1.enqueue(i*2);
        }
        q1.display();
        System.out.println(Integer.toString(q1.dequeue())+" has been dequeued");
        q1.display();
    }
}