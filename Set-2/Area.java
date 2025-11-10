
import java.util.Scanner;

class GetArea {
    float a, b, c;

    public GetArea() {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter three decimal values:");
        a = scan.nextFloat();
        b = scan.nextFloat();
        c = scan.nextFloat();
    }

    void area(float r) {
        System.out.println("Area of circle is " + (r * r));
    }

    void area(float l, float b) {
        System.out.println("Area of rectangle is " + (l * b));
    }

    void area(float a, float b, float c) {
        float s = (a + b + c) / 2;
        System.out.println("Area of triangle is " + (Math.sqrt(s * (s - a) * (s - b) * (s - c))));
    }
}

public class Area {
    public static void main(String args[]) {
        GetArea get = new GetArea();
        get.area(get.a);
        get.area(get.a, get.b);
        get.area(get.a, get.b, get.c);
    }
}
