
import java.util.Scanner;

class EvenOdd {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = scan.nextInt();
        System.out.println("The nubmer " + num + " is " + (num % 2 == 0 ? "Even" : "Odd"));
    }
}