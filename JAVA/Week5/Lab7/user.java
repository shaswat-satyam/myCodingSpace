class InvalidAgeException extends Exception{
    public InvalidAgeException (String str){
        super(str);
    }
}

public class user{

    static void validate(String name,int age) throws InvalidAgeException{
     if(age < 15){
        throw new InvalidAgeException(name + "'s age is too low!");
     } else if(age > 60){
        throw new InvalidAgeException(name + "'s age is too high");
     }
    }
    public static void main(String[] args) {
        String name = args[0];
        int age = Integer.parseInt(args[1]);
        try{
            validate(name,age);
        } catch(InvalidAgeException e){
            System.out.println("Caught an exception!");
            System.out.println(e);
        }

    }
}