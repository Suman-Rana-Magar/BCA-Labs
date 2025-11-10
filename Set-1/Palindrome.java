import java.util.Scanner;

class Palindrome {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = scan.nextInt();
        System.out.println("The number " + num + " is " + (isPalindrome(num) ? "palindrome" : "not palindrome"));
    }

    static boolean isPalindrome(int n) {
        int rev = 0, temp = n, rem;
        do {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        } while (temp != 0);
        if (rev == n)
            return true;
        else
            return false;
    }
}