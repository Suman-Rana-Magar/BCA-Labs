
import java.util.Scanner;

public class StudentMarks {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the following details of a student: ");
        System.out.print("Roll No: ");
        int rollNo = scan.nextInt();
        System.out.print("Name: ");
        String name = scan.next();
        System.out.print("English Marks: ");
        double englishMarks = scan.nextDouble();
        System.out.print("Mathematics Marks: ");
        double mathMarks = scan.nextDouble();
        System.out.print("Science Marks: ");
        double scienceMarks = scan.nextDouble();
        Student student = new Student(rollNo, name, englishMarks, mathMarks, scienceMarks);
        student.calcTotal();
        student.display();
    }
}

class Student {
    int rollNo;
    String name;
    double englishMarks;
    double mathMarks;
    double scienceMarks;
    double totalMarks;

    Student(int rollNo, String name, double englishMarks, double mathMarks, double scienceMarks) {
        this.rollNo = rollNo;
        this.name = name;
        this.englishMarks = englishMarks;
        this.mathMarks = mathMarks;
        this.scienceMarks = scienceMarks;
        this.totalMarks = 0;
    }

    void calcTotal() {
        totalMarks = englishMarks + mathMarks + scienceMarks;
    }

    void display() {
        System.out.println("\n\nStudent Details:");
        System.out.println("Roll No: " + rollNo);
        System.out.println("Name: " + name);
        System.out.println("English Marks: " + englishMarks);
        System.out.println("Mathematics Marks: " + mathMarks);
        System.out.println("Science Marks: " + scienceMarks);
        System.out.println("Total Marks: " + totalMarks);
        System.out.println();
    }
}
