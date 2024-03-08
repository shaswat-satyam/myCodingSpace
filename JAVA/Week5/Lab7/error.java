class ageException extends Exception{
    public ageException(int age){
        super();
        System.out.println("Inside the ageException");
        System.out.println(age + " is invalid for voting");
    }
}
public class error{
   static void validate(int age) throws ageException{
        System.out.println("Inside the validate function");
        if(age < 18){
            throw new ageException(age);
        }
   }
   public static void main(String[] args) {
        int age1 = 17;
        int age2 = 18;
        try{
            System.out.println("Inside the Try block");
            validate(age1);
            validate(age2);
        } catch(ageException e){
            System.out.println("Inside the Catch block");
            System.out.println(e);
        } finally{
            System.out.println("Inside the Finally block");
        }
   } 
}