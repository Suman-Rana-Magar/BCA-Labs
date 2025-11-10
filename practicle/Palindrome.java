import java.util.Scanner;

public class Palindrome {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        int num;
        System.out.println("Enter a number");
        num = scan.nextInt();
        System.out.println("The number " + num + " is " + (isPalindrome(num) ? "Palindrome" : "Not Palindrome"));
    }

    static boolean isPalindrome(int num) {
        int org = num, rev = 0, rem;
        while (num > 0) {
            rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
        }
        return org == rev ? true : false;
    }
}
