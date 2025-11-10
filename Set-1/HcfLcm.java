
import java.util.Scanner;

public class HcfLcm {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Entere two numbers");
        int a = scan.nextInt();
        int b = scan.nextInt();
        int lc = a * b, lcm = 0, hcf = 0, rem;
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
        System.out.println("HCF = " + hcf + " LCM = " + lcm);
    }
}
