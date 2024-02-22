public class Parent extends Base {
    void display() {
        System.out.println("Parent class Display function is called");
    }
    public static void main(String[] args) {
        Base b1 = new Base();
        b1.display();

        Parent p1 = new Parent();
        p1.display();
    }
}
