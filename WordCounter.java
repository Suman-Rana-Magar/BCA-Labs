
import java.util.Scanner;

public class WordCounter {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter words without new line");
        String text = scan.nextLine();
        char c[] = text.toCharArray();
        int wordCount = 0;
        int length = c.length;
        for (int i = 0; i < length; i++) {
            if (c[i] == ' ' && c[i] != length - 1)
                wordCount++;
        }
        System.out.println("There are " + wordCount + " words in the given text.");
    }
}
