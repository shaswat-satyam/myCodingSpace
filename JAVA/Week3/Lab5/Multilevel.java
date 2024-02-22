package Week3.Lab5;

import Lab1.welcome;

public class Multilevel {
    public static void main(String[] args) {
        Base b = new Base();
        Base1 b1 = new Base1();
        Base2 b2 = new Base2();
        b.display();
        b1.displayB1();
        b2.DisplayB2();
    }
}
