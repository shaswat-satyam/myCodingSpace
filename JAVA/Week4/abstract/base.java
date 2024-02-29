interface Interface {
     void display(); 
}  
 
class Implement1 implements Interface{
    public void display() {
        System.out.println("First Implementation");
    };
}

class Implement2 implements Interface{
    public void display(){
        System.out.println("Second Implementation");
    }
}

public class base{
    public static void main(String[] args) {
        Interface i1 = new Implement1();
        i1.display();

        i1 = new Implement2();
        i1.display();
    }
}

