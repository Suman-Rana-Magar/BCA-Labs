
import java.util.Scanner;

public class ArrayMultiply {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        int r1, r2, c1, c2;
        System.out.println("Enter the size of first matrix");
        r1 = scan.nextInt();
        c1 = scan.nextInt();
        System.out.println("Enter the size of second matrix");
        r2 = scan.nextInt();
        c2 = scan.nextInt();
        if (c1 != r2) {
            System.out
                    .println("Since no. of columns of 1st matrix != no. of rows of 2nd matrix, it can't be multiplied");
            System.exit(1);
        }
        int A[][] = new int[r1][c1];
        int B[][] = new int[r2][c2];
        int C[][] = new int[r1][c2];
        System.out.println("Enter " + r1 * c1 + " elements of first matrix");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                A[i][j] = scan.nextInt();
            }
        }
        System.out.println("Enter " + r2 * c2 + " elements of second matrix");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                B[i][j] = scan.nextInt();
            }
        }
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                C[i][j] = 0;
                for (int k = 0; k < c1; k++)
                    C[i][j] += A[i][k] * B[k][j];
            }
        }
        System.out.println("The product of given matrixes is:");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++)
                System.out.print(C[i][j] + "\t");
            System.out.println();
        }
    }
}
