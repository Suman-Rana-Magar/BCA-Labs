
import java.util.Scanner;

class CustomException extends Exception {
    CustomException(String message) {
        super(message);
    }
}

public class ExceptionHandling3 {
    public static void main(String args[]) {
        try {
            int roll;
            String name;
            float marks;
            Scanner scan = new Scanner(System.in);
            System.out.println("Enter the Name, Roll and marks");
            name = scan.next();
            roll = scan.nextInt();
            marks = scan.nextFloat();
            if (roll < 0)
                throw new CustomException("Roll no. can't be negative");
            if (marks > 100)
                throw new CustomException("Marks can't be greater than 100");
            System.out.println("Name: " + name + "\nRoll: " + roll + "\nMarks: " + marks);
        } catch (CustomException e) {
            System.out.println(e);
        }
    }
}
