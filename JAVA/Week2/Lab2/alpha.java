package Lab2;
import java.util.Scanner;

public class alpha {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the two characters");
        char ch1 = input.next().charAt(0);
        char ch2 = input.next().charAt(0);
        char low = ch1 < ch2 ? ch1 : ch2;
        char high = ch1 < ch2 ? ch2 : ch1;
        System.err.println("The alphabets are:");
        while(low <= high){
            System.err.print(low++ + " ");
        } 
    }
}
