
import java.util.Scanner;

class Student {
    String name;
    int roll;
}

class Exam extends Student {
    Float english, nepali, maths;
}

class Result extends Exam {
    Float total;
}

public class StudentResult {
    public static void main(String args[]) {
        Result rs = new Result();
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter name, roll and marks in three subjects(English, Nepali, Maths) respectively: ");
        rs.name = scan.next();
        rs.roll = scan.nextInt();
        rs.english = scan.nextFloat();
        rs.nepali = scan.nextFloat();
        rs.maths = scan.nextFloat();
        rs.total = rs.english + rs.nepali + rs.maths;
        System.out.println("Following is the detail:\nName: " + rs.name + "\nRoll: " + rs.roll + "\nMarks in English: "
                + rs.english + "\nMarks in Nepali: " + rs.nepali + "\nMarks in Maths: " + rs.maths + "\nTotal Marks: "
                + rs.total);
    }
}
