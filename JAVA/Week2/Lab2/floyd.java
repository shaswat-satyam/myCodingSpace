package Lab2;

import java.util.Scanner;

public class floyd {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of rows:");
        int rows = input.nextInt();
        for (int i = 0; i < rows; i++) {
            int j = 0;
            while (j++ <= i) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
