
import java.util.Scanner;

public class Employee {
    int id;
    String name, address;
    float salary;

    public void getData(int emp) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the detail of the employee " + emp + ": ");
        System.out.print("ID: ");
        id = scan.nextInt();
        scan.nextLine();
        System.out.print("Name: ");
        name = scan.nextLine();
        System.out.print("Address: ");
        address = scan.nextLine();
        System.out.print("Salary: ");
        salary = scan.nextFloat();
    }

    public static void main(String[] args) {
        Employee employee[] = new Employee[5];
        for (int i = 0; i < 5; i++) {
            employee[i] = new Employee();
            employee[i].getData(i + 1);
        }

        for (int i = 0; i < 5; i++) {
            for (int j = i + 1; j < 5; j++) {
                if (employee[i].salary < employee[j].salary) {
                    Employee temp = employee[i];
                    employee[i] = employee[j];
                    employee[j] = temp;
                }
            }
        }

        System.out.println("\nTop 3 Employees with Highest Salary:");
        for (int i = 0; i < 3; i++) {
            System.out.println("\nEmployee " + (i + 1) + ":");
            System.out.println("ID: " + employee[i].id);
            System.out.println("Name: " + employee[i].name);
            System.out.println("Address: " + employee[i].address);
            System.out.println("Salary: " + employee[i].salary);
        }
    }
}