
import java.util.Scanner;

public class LCM {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter two numbers");
        int a = scan.nextInt();
        int b = scan.nextInt();
        int lcm = 0, hcf = 0, rem, lc = a * b;
        do {
            rem = a % b;
            if (rem == 0)
                hcf = b;
            else {
                a = b;
                b = rem;
            }
        } while (rem != 0);
        lcm = lc / hcf;
        System.out.println("lcm=" + lcm + " hcf=" + hcf);
    }
}
