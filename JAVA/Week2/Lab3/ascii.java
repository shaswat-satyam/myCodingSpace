package Lab3;

import java.util.Scanner;

public class ascii {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of char:");
        int length = input.nextInt();
        int[] inputArr = new int[length];
        System.out.print("Enter the ASCII code:");
        for (int i = 0; i < length; i++) {
            inputArr[i] = input.nextInt();
        }

        for (int i = 0; i < inputArr.length; i++) {
            System.out.print((char)(inputArr[i])+" ");
        }
        System.out.println();
    }
}
