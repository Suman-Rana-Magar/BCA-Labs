
import java.util.Scanner;

public class Fibonacci {
    static int fibonacci(int num) {
        if (num <= 1)
            return num;
        return fibonacci(num - 1) + fibonacci(num - 2);
    }

    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = scan.nextInt();
        System.out.println("The "+num+"th terms of fibonacci series is "+fibonacci(num));
    }

}
