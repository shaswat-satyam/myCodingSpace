package Lab2;

import java.util.Scanner;

public class color {
    public static void main(String[] args) {
        System.out.print("Enter the color:");
        Scanner input = new Scanner(System.in);
        char ch = input.next().charAt(0);
        System.out.println("Color code given is:" + ch);
    }
}
