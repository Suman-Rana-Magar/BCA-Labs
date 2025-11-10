import java.util.Scanner;
import java.lang.Math;

public class QuadraticRoots {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        int real, img, d, x1, x2;
        System.out.println("Enter the value of a, b and c\n");
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        d = b * b - 4 * a * c;
        if (d > 0) {
            d = Math.sqrt(d);
            x1 = (-b + d) / (2 * a);
            x2 = (-b - d) / (2 * a);
            System.out.println("The roots are:\nx1=%d and x2=%d\n", x1, x2);
        } else if (d < 0) {
            d = Math.sqrt(Math.abs(d));
            real = -b / (2 * a);
            img = d / (2 * a);
            System.out.println("The roots are:\nx1=%d + i%d\nx2=%d - i%d\n", real, img, real, img);
        } else {
            x1 = -b / (2 * a);
            System.out.println("The root is %d", x1);
        }
        return 0;
    }
}
