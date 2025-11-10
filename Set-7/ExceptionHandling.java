import java.io.FileOutputStream;
import java.io.IOException;
import java.util.InputMismatchException;
import java.util.Scanner;

public class ExceptionHandling {
    public static void main(String args[]) {
        FileOutputStream fout = null;
        try {
            Scanner scan = new Scanner(System.in);
            fout = new FileOutputStream("Exception.txt");
            System.out.println("Enter any two numbers: ");
            float a = scan.nextFloat();
            float b = scan.nextFloat();
            System.out.println("Enter the 5 integer array data: ");
            int arr[] = new int[5];
            for (int i = 0; i < 5; i++) {
                arr[i] = scan.nextInt();
                fout.write(arr[i]);
            }
            float division = a / b;
            System.out.println("The division is " + division);
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception Occured !");
        } catch (InputMismatchException e) {
            System.out.println("Data format did not match !");
        } catch (NumberFormatException e) {
            System.out.println("Number Format Exception Occured !");
        } catch (Exception e) {
            System.out.println("Other Exception Occured !");
        } finally {
            try {
                if (fout != null) {
                    fout.close();
                    System.out.println("File Closed Successfully!");
                }
            } catch (IOException e) {
                System.out.println("Error Occured While Closing File !");
            }
        }
    }
}
