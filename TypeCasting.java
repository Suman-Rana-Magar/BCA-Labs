import java.util.Scanner;

public class TypeCasting {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter two numbers");
        double n1 = scan.nextDouble();
        double n2 = scan.nextDouble();
        int product = (int)n1 * (int)n2;
        System.out.println("The product is " + product);
    }
}
