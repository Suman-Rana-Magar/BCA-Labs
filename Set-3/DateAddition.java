
import java.util.Scanner;

public class DateAddition {
    int dd, mm, yy;
    int d, m, y;

    public void readDate(){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the first date in YYYY MM DD format: ");
        yy = scan.nextInt();
        mm = scan.nextInt();
        dd = scan.nextInt();

        System.out.println("Enter the second date in YYYY MM DD format: ");
        y = scan.nextInt();
        m = scan.nextInt();
        d = scan.nextInt();
    }

    public void addDate(){
        dd += d;
        mm += m;
        yy += y;
    }

    public void finalDate(){
        if(dd > 31){
            mm += dd / 31;
            dd = dd % 31;
        }
        if(mm > 12){
            yy += mm / 12;
            mm = mm % 12;
        }
    }

    public void displayDate(){
        System.out.println("The date is: " + yy + "/" + mm + "/" + dd);
    }

    public static void main(String[] args) {
        DateAddition dateAddition = new DateAddition();
        dateAddition.readDate();
        dateAddition.addDate();
        dateAddition.finalDate();
        dateAddition.displayDate();
    }
}