
import java.io.*;
import java.util.Scanner;

public class ExceptionHandling2 {
    public static void main(String args[]) {
        Writer wr = null;
        try {
            Scanner scan = new Scanner(System.in);
            wr = new FileWriter("Example.txt");
            wr.write("This is nothing");
            wr.close();
            String str = null;
            System.out.println("The Length of string is " + str.length());
            System.out.print("Enter a number to get square root: ");
            int num = scan.nextInt();
            if (num < 0)
                throw new IllegalArgumentException("Number can't be negative");
            double root = Math.sqrt(num);
            System.out.println("The Square root is " + root);
        } catch (FileNotFoundException e) {
            System.out.println("Requested File Not Found !");
        } catch (IOException e) {
            System.out.println("Input Output Exception Occured !");
        }
    }
}
