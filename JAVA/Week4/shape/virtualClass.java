import java.util.Scanner;
abstract class Shape {
    int a;
    int b;
    abstract double area();
   }

class Rectangle extends Shape{
    Rectangle(){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the Length and Breadth:");
        a = input.nextInt();
        b = input.nextInt(); 
    }
    
    double area(){
        return a*b;
    }
   }
 class Triangle extends Shape{
    Triangle(){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the height and base of the triangle");
        a = input.nextInt();
        b = input.nextInt();
    }
    double area(){
        return 0.5 * a * b;
    }
   }



public class virtualClass{  
    public static void main(String args[]){
        Triangle t1 = new Triangle();
        Rectangle r1 = new Rectangle();
        System.out.println("Area of the triangle is " + t1.area());
        System.out.println("Area of the rectangle is " + r1.area());

    }
}