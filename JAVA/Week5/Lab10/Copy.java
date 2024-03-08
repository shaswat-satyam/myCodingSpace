import java.io.*;
import java.util.Scanner;

public class Copy{
   public static void main(String[] args) throws IOException {
    FileReader input = new FileReader("input.txt");
    FileWriter output = new FileWriter("output.txt");
    System.out.println("Starting IO operation");
    while(input.ready()){
        char data;
        data = (char)input.read();
        System.out.print(data);
        output.write(data);
    }
    output.close();
    input.close();
    System.out.println();
    System.out.println("IO success!");
    
   }
}


