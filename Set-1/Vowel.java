
import java.util.Scanner;

public class Vowel {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a character: ");
        char ch = scan.next().charAt(0);
        boolean isVowel;
        switch (ch) {
            case 'a':
            case 'A':
                isVowel = true;
                break;
            case 'e':
            case 'E':
                isVowel = true;
                break;
            case 'i':
            case 'I':
                isVowel = true;
                break;
            case 'o':
            case 'O':
                isVowel = true;
                break;
            case 'u':
            case 'U':
                isVowel = true;
                break;
            default:
                isVowel = false;
                break;
        }
        if (isVowel)
            System.out.println(ch + " is vowel");
        else
            System.out.println(ch + " is consonant");
    }
}
