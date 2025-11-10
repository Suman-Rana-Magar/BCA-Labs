
import java.util.Scanner;

public class SumOfDigits {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = scan.nextInt();
        int sum = 0, temp = num, rem;
        while (temp != 0) {
            rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        System.out.println("The sum of digits of "+num+" is "+sum);
    }
}
