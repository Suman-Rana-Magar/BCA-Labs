import java.util.Scanner;

class Student {
    String name;
    int roll;
    float marks;
    String remarks;

    // Method to read student data
    public void readData() {
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter student name: ");
        name = scan.nextLine();

        System.out.print("Enter roll number: ");
        roll = scan.nextInt();

        System.out.print("Enter marks: ");
        marks = scan.nextFloat();

        scan.nextLine();

        System.out.print("Enter remarks: ");
        remarks = scan.nextLine();
    }

    // Method to display student data
    public void displayData() {
        System.out.println("\nStudent Details:");
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + roll);
        System.out.println("Marks: " + marks);
        System.out.println("Remarks: " + remarks);
    }

    public static void main(String[] args) {
        Student student = new Student();
        student.readData();
        student.displayData();
    }
}
