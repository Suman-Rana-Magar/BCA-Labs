
import java.util.Scanner;

public class Fibonacci {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Entere the no. of terms of fibonacci series");
        int terms = scan.nextInt();
        System.out.println("Following are the "+terms+" terms of fibonacci series:");
        for (int i = 0; i < terms; i++)
            System.out.print(getItems(i) + "\t");
        System.out.println();
    }

    static int getItems(int num) {
        if (num == 0 || num == 1)
            return num;
        return getItems(num - 1) + getItems(num - 2);
    }
}
