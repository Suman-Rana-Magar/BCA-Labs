
import java.util.Scanner;

public class Divisible {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = scan.nextInt();
        if (num % 5 == 0 && num % 7 == 0)
            System.out.println("The number " + num + " is exactly divisible by both 5 and 7");
        else if (num % 5 == 0 && num % 7 != 0)
            System.out.println("The number " + num + " is exactly divisible by 5 but not by 7");
        else if (num % 5 != 0 && num % 7 == 0)
            System.out.println("The number " + num + " is exactly divisible by 7 but not by 5");
        else
            System.out.println("The number " + num + " is not exactly divisible by both 5 and 7");
    }
}
