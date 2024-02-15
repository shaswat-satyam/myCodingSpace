import java.util.Scanner;


 


public class area{
   
    double area(double radius){
        return 3.14 * radius * radius;
}

double area(double length, double breadth){
        return length * breadth;
}

double area(double a, double b, double c){
    double s = (a+b+c)/2;
    return Math.pow((s*(s-a)*(s-b)*(s-c)),0.5);
}
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
       
        area a1 = new area();

        System.out.print("Enter the radius of the circle: ");
        System.out.println("The Area of the circle is "+String.valueOf(a1.area(input.nextDouble())));

        System.out.print("Enter the length and breath of the rectangle: ");
        System.out.println("The Area of the rectangle is "+String.valueOf(a1.area(input.nextDouble(),input.nextDouble())));

        System.out.print("Enter the 3 sides of the triangle:");
        System.out.println("The Area of the triangle is"+String.valueOf(a1.area(input.nextDouble(),input.nextDouble(),input.nextDouble())));
            
    }
}