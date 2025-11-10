import java.util.Scanner;
import java.lang.String;

public class Palindrome {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        String str;
        System.out.print("Enter any string: ");
        str = scan.next();
        StringBuffer rev = new StringBuffer(str);
        rev.reverse();
        System.out.println("The string " + str + " is " + (str.equals(rev.toString()) ? "palindrome" : "not palindrome"));
    }
}
