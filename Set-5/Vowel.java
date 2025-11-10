import java.util.Scanner;
import java.lang.String;

public class Vowel {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter any character: ");
        char ch = scan.next().charAt(0);
        char vowels[] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
        int count = 0;
        for (int i = 0; i < 10; i++) {
            if (vowels[i] == ch) {
                count++;
                break;
            }
        }
        System.out.println("The character " + ch + " is " + (count == 0 ? "consonant" : "vowel"));
    }
}
