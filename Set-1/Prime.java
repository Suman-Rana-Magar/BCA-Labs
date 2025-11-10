
import java.util.Scanner;

public class Prime {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Entere a number: ");
        int num = scan.nextInt();
        int notPrime = 0;
        for (int i = 2; i < num; i++) {
            if (num % i == 0)
                notPrime++;
        }
        if (notPrime > 0)
            System.out.println("The number " + num + " is not prime");
        else
            System.out.println("The number " + num + " is prime");
    }
}
