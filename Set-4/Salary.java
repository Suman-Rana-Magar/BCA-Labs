
import java.util.Scanner;

class Lecturer {
    String name;
    Float salary;
}

class Fulltime extends Lecturer {
    void getData(String name, Float salary) { 
        super.name = name;
        super.salary = salary;
    }

    void display() {
        System.out.println("Fulltime lecturer detail:\nName: " + name + "\nSalary(Per Month): " + salary);
    }
}

class Parttime extends Lecturer {
    void getData(String name, Float salary) {
        super.name = name;
        super.salary = salary;
    }

    void display() {
        System.out.println("Parttime lecturer detail:\nName: " + name + "\nSalary(Per Hour): " + salary);
    }
}

public class Salary {
    public static void main(String args[]) {
        Scanner scan=new Scanner(System.in);
        // String name;
        // Float salary;
        Fulltime ft = new Fulltime();
        Parttime pt = new Parttime();
        // System.out.println("Enter the name and salary of parttime teacher");
        // name=scan.next();
        // salary=scan.nextFloat();
        // pt.getData(name, salary);
        pt.getData("Suman", (float)1000);
        // System.out.println("Enter the name and salary of fulltime teacher");
        // name=scan.next();
        // salary=scan.nextFloat();
        // ft.getData(name, salary);
        ft.getData("Ram", (float)15000);
        pt.display();
        ft.display();
    }
}
