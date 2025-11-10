import java.util.Scanner;

public class SubjectMarks {
    float physics, chemistry, maths, total;
    
    public void getMarks() {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter marks (Physics Chemistry Mathematics): ");
        physics = scan.nextFloat();
        chemistry = scan.nextFloat(); 
        maths = scan.nextFloat();
        total = physics + chemistry + maths;
    }

    public void displayMarks() {
        System.out.printf("\nMarks - Physics: %.1f, Chemistry: %.1f, Mathematics: %.1f, Total: %.1f\n", 
            physics, chemistry, maths, total);
    }

    public static void main(String[] args) {
        SubjectMarks[] students = new SubjectMarks[3];
        
        for(int i = 0; i < 3; i++) {
            System.out.println("\nStudent " + (i+1));
            students[i] = new SubjectMarks();
            students[i].getMarks();
        }

        for(int i = 0; i < 3; i++) {
            System.out.print("\nStudent " + (i+1));
            students[i].displayMarks(); 
        }
    }
}
