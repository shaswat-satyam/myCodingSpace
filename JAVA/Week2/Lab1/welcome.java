package Lab1;
public class welcome {
    public static void main(String[] args) {
        if(args.length != 1){
            System.out.println("Error! Enter a valid name!");
            return;
        }
        System.out.println( "Welcome to the JAVA lab " + args[0] );
    }
}
