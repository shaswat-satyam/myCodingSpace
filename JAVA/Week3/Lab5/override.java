class override extends Base{
    @Override void display(){
        System.out.println("Display has been overriden");
    }
    public static void main(String args[]){
        Base b1 = new Base();;
        b1.display();
        override o1 = new override();
        o1.display();
    }
}
