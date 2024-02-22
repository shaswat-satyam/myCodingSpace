package Week3.Lab5;

public class inherit {
    public static void main(String[] args) {

        child c1 = new child();
        c1.displayChild();

        Super s1 = new Super();
        s1.displayChild();
        s1.displaySuper();
    }
}
