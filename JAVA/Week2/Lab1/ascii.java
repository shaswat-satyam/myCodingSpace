package Lab1;
import java.util.Scanner;

public class ascii {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a character:");
        char ch = input.next().charAt(0);
        System.out.println(ch + " in ASCII is " + (int)(ch));
    }
}
