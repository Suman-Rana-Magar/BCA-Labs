
import java.util.Scanner;

public class OutOfKathmandu {
    String name, address;
    int roll;
    long phone;

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num;
        System.out.println("Enter the number of students: ");
        num = scan.nextInt();
        OutOfKathmandu[] out = new OutOfKathmandu[num];
        for (int i = 0; i < num; i++) {
            System.out.println("Enter the details of the student " + (i + 1) + ":");
            out[i] = new OutOfKathmandu();
            System.out.print("Roll: ");
            out[i].roll = scan.nextInt();
            System.out.print("Name: ");
            out[i].name = scan.next();
            System.out.print("Address: ");
            out[i].address = scan.next();
            System.out.print("Phone: ");
            out[i].phone = scan.nextLong();
        }
        int totalOutOfKathmandu = 0;
        for (int i = 0; i < num; i++) {
            if (out[i].address.equals("Kathmandu"))
                continue;
            totalOutOfKathmandu++;
        }
        System.out.println("Total number of students outside Kathmandu: " + totalOutOfKathmandu);
    }
}
