class Student {
    String name;
    int age;

    void getData(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void display() {
        System.out.println("Hello @" + name + ", you are a student and you are" + age + " years old");
    }
}

class Employee {
    String name;
    int age;

    void getData(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void display() {
        System.out.println("Hello @" + name + ", you are an employee and you are" + age + " years old");
    }
}

public class Manager extends Student,Employee
{

    public static void main(String args[]) {
        Manager mgr = new Manager();
        mgr.getData("Suman", 12);
        mgr.display();
    }
}

// this can't be executed because java do not support multiple inheritance