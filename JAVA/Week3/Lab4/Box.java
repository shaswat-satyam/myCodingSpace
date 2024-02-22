package Week3.Lab4;

public class Box {
    double width;
    double height;
    double depth;

    Box(double width, double height, double depth) {
        this.width = width;
        this.height = height;
        this.depth = depth;
    }

    double volume() {
        return height * width * depth;
    }

    public static void main(String[] args) {
        Box B1 = new Box(5,4,9);
        System.out.println("Create a new Box Object");
        System.out.println("The volume of the box is " + B1.volume());
    }
}
