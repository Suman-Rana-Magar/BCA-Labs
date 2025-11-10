
import java.util.Scanner;

class MatrixMultiplicationException extends Exception {
    MatrixMultiplicationException(String message) {
        super(message);
    }
}

public class ExceptionHandling4 {
    public static void main(String args[]) {
        try {
            Scanner scan = new Scanner(System.in);
            int m, n, p, q;
            System.out.println("Enter the size of first matrix");
            m = scan.nextInt();
            n = scan.nextInt();
            System.out.println("Enter the size of second matrix");
            p = scan.nextInt();
            q = scan.nextInt();
            if (n != p)
                throw new MatrixMultiplicationException(
                        "No. of colums of first matrix must be same as no. of rows of second matrix");
            System.out.println("Hurrey! Matrix can be Multiplied");
        } catch (MatrixMultiplicationException e) {
            System.out.println(e);
        }

    }
}
