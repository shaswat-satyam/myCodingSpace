
public class Base2 extends Base1 {
    void displayB2() {
        System.out.println("Display function of Base2 is called");
    }
    public static void main(String args[]){
        Base b = new Base();
        Base1 b1 = new Base1();
        Base2 b2 = new Base2();
        b.display();
        b1.displayB1();
        b1.display();
        b2.displayB2();
        b2.displayB1();
        b2.display();
    }
}
