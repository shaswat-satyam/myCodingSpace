package Lab2;

public class even {
    public static void main(String[] args) {
        System.out.println("The even numbers between 23 and 57 are:");
        for (int i = 23; i < 57; i++) {
            if (i%2 == 0) {
                System.out.println(i+", ");
            }
        }
        System.out.println();
    }
}
