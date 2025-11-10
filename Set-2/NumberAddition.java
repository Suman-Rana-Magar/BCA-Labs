
import java.util.Scanner;

class Sum {
    float a, b, c;

    Sum(float x, float y, float z) {
        a = x;
        b = y;
        c = z;
    }

    void display() {
        System.out.println("The sum is " + (a + b + c));
    }
}

public class NumberAddition {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Entere three numbers");
        float a = scan.nextFloat();
        float b = scan.nextFloat();
        float c = scan.nextFloat();
        new Sum(a, b, c).display();
    }
}
