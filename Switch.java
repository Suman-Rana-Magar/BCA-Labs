
import java.util.Scanner;

public class Switch {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        int option = 0;
        while (true) {
            System.out.println("What operation you want to perform?\n\t1. Numeric \n\t2.Character");
            try {
                option = scan.nextInt();
                if (option == 1 || option == 2)
                    break;
            } catch (Exception e) {
                scan.next();
            }
        }
        switch (option) {
            case 1:
                numeric();
                break;
            case 2:
                character();
                break;
            default:
                System.out.println("Invalid");
        }
    }

    static void numeric() {
        System.out.print("Enter any number: ");
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        boolean positive = false;
        if (num > 0)
            positive = true;
        boolean odd = true;
        if (num % 2 == 0)
            odd = false;
        boolean prime = false;
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                prime = false;
                break;
            }
            if (i == num - 1 && num % i != 0)
                prime = true;
        }
        if (num == 2)
            prime = true;
        System.out.println("The number " + num + " is " + (positive ? "positive" : "negatiev") + ", "
                + (odd ? "odd" : "even") + " and " + (prime ? "prime" : "composite"));
    }

    static void character() {
        Scanner scan = new Scanner(System.in);
        char c;
        while (true) {
            System.out.print("Enter any character: ");
            try {
                c = scan.next().charAt(0);
                if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
                    break;
            } catch (Exception e) {
                scan.next();
            }
        }
        boolean isVowel = false;
        char vowel[] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
        for (char vwl : vowel) {
            if (c == vwl) {
                isVowel = true;
                break;
            }
        }
        System.out.println("The character " + c + " is " + (isVowel ? "vowel" : "consonant"));
    }
}
