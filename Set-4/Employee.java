import java.util.Scanner;

class Person {
    String name;
    int age;
    float salary;

    void getData() {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the Name, Age and salary of a person");
        name = scan.next();
        age = scan.nextInt();
        salary = scan.nextFloat();
    }

    void display() {
        System.out.println(
                "Following are the detail of the person:\nName: " + name + "\nAge: " + age + "\nSalary: " + salary);
    }
}

public class Employee extends Person {
    public static void main(String args[]) {
        Employee emp = new Employee();
        emp.getData();
        emp.display();
    }
}
