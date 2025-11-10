
import java.util.Scanner;

class GetRange {
    Scanner scan = new Scanner(System.in);
    int a, b;

    GetRange() {
        System.out.print("Entere the range(min max): ");
        a = scan.nextInt();
        b = scan.nextInt();
    }

    void display() {
        System.out.println("Following are the numbers between " + a + " and " + b + " which are divisible by 3");
        for (int i = a; i <= b; i++) {
            if (i % 3 == 0)
                System.out.print(i + "\t");
        }
        System.out.println();
    }
}

public class Range {
    public static void main(String args[]) {
        new GetRange().display();
    }
}
