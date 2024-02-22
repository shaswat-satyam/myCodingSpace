public class Base {
    int a;
    int b;

    Base(int a, int b) {
        this.a = a;
        this.b = b;
    }

    void display() {
        for (int i = a; i < b; i++) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
    
}
