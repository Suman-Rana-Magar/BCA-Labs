
import java.util.Scanner;

public class Largest {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter three numbers");
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        if (a > b && a > c)
            System.out.println("The largest number is " + a);
        else if (b > a && b > c)
            System.out.println("The largest number is " + b);
        else
            System.out.println("The largest number is " + c);
    }
}
