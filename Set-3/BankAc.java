
import java.util.Scanner;

public class BankAc {
    String name, accType;
    long accNo;

    void assign(String n, String t, long a) {
        name = n;
        accType = t;
        accNo = a;
    }

    void display() {
        System.out.println("Following are the details of the account: ");
        System.out.println("Account Holder's Name: " + name);
        System.out.println("Account Type: " + accType);
    }

    public static void main(String[] args) {
        BankAc b1 = new BankAc();
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the name of the account holder: ");
        String n = scan.nextLine();
        System.out.println("Enter the account type: ");
        String t = scan.nextLine();
        System.out.println("Enter the account number: ");
        long a = scan.nextLong();
        b1.assign(n, t, a);
        b1.display();
    }
}
