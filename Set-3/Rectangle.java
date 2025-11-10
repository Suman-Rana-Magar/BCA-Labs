import java.util.Scanner;

public class Rectangle {
    float length, breadth;

    public Rectangle() {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the length of the rectangle: ");
        length = scan.nextFloat();
        System.out.println("Enter the breadth of the rectangle: ");
        breadth = scan.nextFloat();
    }

    public void calculation() {
        float area = length * breadth;
        float perimeter = 2 * (length + breadth);
        System.out.println("The area of the rectangle is: " + area);
        System.out.println("The perimeter of the rectangle is: " + perimeter);
    }

    public static void main(String[] args) {
        new Rectangle().calculation();
    }
}