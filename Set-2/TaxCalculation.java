
import java.util.Scanner;

class GetTax {
    float tax;

    GetTax(float income) {
        if (income < 9000)
            tax = 20 * income / 100;
        else
            tax = 25 * income / 100;
    }

    float provideTax() {
        return tax;
    }
}

public class TaxCalculation {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Entere the no. of employees: ");
        int emp = scan.nextInt();
        float tax[] = new float[emp];
        for (int i = 0; i < emp; i++) {
            System.out.print("Entere the salary of employee " + (i + 1) + ": ");
            GetTax gt = new GetTax(scan.nextFloat());
            tax[i] = gt.provideTax();
        }
        System.out.println("Following are the employees with their tax payment");
        for (int i = 0; i < emp; i++)
            System.out.println("Employee " + (i + 1) + " paid " + tax[i] + " as tax");
    }
}
