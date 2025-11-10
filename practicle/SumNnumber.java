import java.util.Scanner;

public class SumNnumber {
    public static void main(String args[]) {
        Scanner scna = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = scna.nextInt();
        System.out.println("The sum of the numbers is " + sum(num));
    }

    static int sum(int num) {
        if (num == 0)
            return 0;
        return num + sum(num - 1);
    }
}
