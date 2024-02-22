public class Super extends child {
    Super(){
        System.out.println("Super class constructor");
    }
    void displaySuper() {
        super.displayChild();
        System.out.println("Calling Display function of super class");
    }
    public static void main(String[] args) {
        child c1 = new child();
        Super s1 = new Super();
        c1.displayChild();
        s1.displaySuper();
    }
}
