import java.util.Scanner;

public class CharRemoveAndCount {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        String str, remString = "", vowelRemoved = "";
        System.out.print("Enter any string: ");
        str = scan.next();
        char charset[] = str.toCharArray();
        char ch;
        int charOccur = 0, vowelOccur = 0, consonantOccur = 0;
        System.out.print("Which character do you want to remove? ");
        ch = scan.next().charAt(0);
        for (int i = 0; i < str.length(); i++) {
            if (charset[i] == ch) {
                charOccur++;
                remString += "";
            } else {
                remString += charset[i];
            }
            if (charset[i] == 'a' || charset[i] == 'e' || charset[i] == 'i' || charset[i] == 'o' || charset[i] == 'u'
                    || charset[i] == 'A' || charset[i] == 'E' || charset[i] == 'I' || charset[i] == 'O'
                    || charset[i] == 'U') {
                vowelRemoved += "";
                vowelOccur++;
            } else {
                vowelRemoved += charset[i];
                consonantOccur++;
            }
        }
        System.out.println("The string \"" + str + "\" after removing '" + ch + "' became \"" + remString + "\" and '"
                + ch + "' occured " + charOccur + " times.");
        System.out.println("The string \"" + str + "\" after removing vowel letters became \"" + vowelRemoved
                + "\" and it has " + vowelOccur + " vowels and " + consonantOccur + " consonant letters.");
    }
}
