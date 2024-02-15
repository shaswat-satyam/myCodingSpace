package Lab2;

import java.util.Scanner;

public class palindrome {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter your String: ");
        String givenString = input.next().toUpperCase();
        int low = 0;
        int high = givenString.length() - 1;
        while(low++<=high--){
            if(givenString.charAt(low)!= givenString.charAt(high)){
                System.out.println("The given string is not a palindrome");
                return;
            }
        }
        System.out.println("The given string is a palindrome");
    }
}
