package Lab1;
import java.util.Scanner;

public class swap {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the two numbers: ");
        int a = input.nextInt();
        int b = input.nextInt();
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        System.out.println("The Numbers are now swapped, A:"+a+" B:"+b);  
    }
}
