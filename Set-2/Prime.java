import java.util.Scanner;

class CheckPrime {
    Scanner scan = new Scanner(System.in);
    int num;

    CheckPrime() {
        System.out.print("Entere a number: ");
        num = scan.nextInt();
        System.out.println("The number " + num + " is " + (isPrime(num) ? "Prime" : "not Prime"));
    }

    boolean isPrime(int n) {
        for (int i = 2; i < n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}

public class Prime {
    public static void main(String args[]) {
        new CheckPrime();
    }
}
