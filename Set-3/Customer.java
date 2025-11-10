
import java.util.Scanner;

public class Customer {
    String fname, lname, address;
    long phone;

    void getData() {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the following details: ");
        System.out.print("First Name: ");
        fname = scan.nextLine();
        System.out.print("Last Name: ");
        lname = scan.nextLine();
        System.out.print("Address: ");
        address = scan.nextLine();
        System.out.print("Phone Number: ");
        phone = scan.nextLong();
    }

    void display() {
        System.out.println("Following are the details of the customer: ");
        System.out.println("Name: " + fname + " " + lname);
        System.out.println("Address: " + address);
        System.out.println("Phone Number: " + phone);
    }

    public static void main(String[] args) {
        Customer c1 = new Customer();
        c1.getData();
        c1.display();
    }
}