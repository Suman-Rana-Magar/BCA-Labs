
import java.util.Scanner;

class CheckLeapYear {
    public CheckLeapYear() {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a year: ");
        int year = scan.nextInt();
        IsLeapYear(year);
    }

    void IsLeapYear(int year) {
        int isLeapYear;
        if (year % 400 == 0)
            isLeapYear = 1;
        else if (year % 100 == 0)
            isLeapYear = 0;
        else if (year % 4 == 0)
            isLeapYear = 1;
        else
            isLeapYear = 0;
        System.out.println(year + " is " + (isLeapYear == 1 ? "a" : "not a") + " leap year");
    }
}

public class LeapYear {
    public static void main(String args[]) {
        new CheckLeapYear();
    }
}
