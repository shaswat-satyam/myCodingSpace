package Lab1;
public class welcome {
    public static void main(String[] args) {
        if(args.length != 1){
            System.out.println("Error! Enter a valid name!");
            return;
        }
        System.out.println( "Welcome " + args[0] + " to the JAVA lab" );
    }
}
