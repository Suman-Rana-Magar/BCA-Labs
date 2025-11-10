import java.util.Scanner;

class Human {
    String name;
    int age;

    void getData(String name, int age) {
        this.name = name;
        this.age = age;
    }
}

class Male extends Human {
    double height;

    Male(double height) {
        this.height = height;
    }

    void display() {
        System.out.println("MALE INFO:\nName: " + name + "\nAge: " + age + "\nHeight: " + height);
    }
}

class Female extends Human {
    double weight;

    Female(double weight) {
        this.weight = weight;
    }

    void display() {
        System.out.println("FEMALE INFO:\nName: " + name + "\nAge: " + age + "\nWeight: " + weight);
    }
}

public class HumanTest {
    public static void main(String args[]) {
        Male male = new Male(5.5);
        Female female = new Female(55.5);
        male.getData("Suman", 12);
        male.display();
        female.getData("Sita", 15);
        female.display();
    }
}
