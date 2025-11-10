import java.util.Scanner;

public class Reference {
    public static void main(String args[]) {
        System.out.print("Entere the value of a and b: ");
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        average(a, b);
        int average = a;
        average(a, b);
        System.out.println("a = " + a + " b = " + b + " average = " + average);
    }

    static void average(int x, int y) {
        int average = (x + y) / 2;
        x = average;
    }
}
