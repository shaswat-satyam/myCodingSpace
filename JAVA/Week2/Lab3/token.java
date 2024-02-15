import java.io.*;
import java.util.Scanner;
public class token{
    String input;
    char sep;
    token(){
        Scanner reader = new Scanner(System.in);
        System.out.println("Enter your desired string");
        this.input = reader.nextLine();
        System.out.println("Enter the seperator character");
        sep = reader.next().charAt(0);
    }
    
    token(String input, char sep){
        this.input = input;
        this.sep = sep;
    }

    int count(){
        int token = 1;
        for(int i = 0; i < input.length();i++){
            if(input.charAt(i)==sep){
                token++;
            }
        }
        return token;
    }

    String[] tokenize(){
        String tokens[] = new String[count()];
        int prev = 0, k = 0;
        for(int i = 0; i < input.length();i++){
            if(input.charAt(i)==sep){
                tokens[k++] = input.substring(prev,i);
                prev = i+1;
            }
        }
        tokens[k] = input.substring(prev,input.length());
        return tokens;
    }

    public static void main(String[] args) {

        
        token t1 = new token();
        System.out.println("The number of tokens are "+t1.count());
        String tokens[] = t1.tokenize();
        for(int i = 0; i < tokens.length;i++){
            System.out.println(tokens[i]);
        }
    }
}