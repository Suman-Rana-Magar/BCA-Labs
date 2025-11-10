
import java.util.Scanner;

class GetSum {
    Scanner scan = new Scanner(System.in);
    int term, sum = 0;

    GetSum() {
        System.out.print("Entere the terms of fibonacci series: ");
        term = scan.nextInt();
        for (int i = 0; i < term; i++)
            sum += getTerms(i);
        System.out.println("The sum of " + term + " terms of fibonacci series is " + sum);
    }

    int getTerms(int n) {
        if (n < 2)
            return n;
        return getTerms(n - 1) + getTerms(n - 2);
    }
}

public class SumOfFibonacci {
    public static void main(String args[]) {
        new GetSum();
    }
}
