import java.util.Scanner;
public class AlphaDigitCount {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter any string: ");
        String str = scan.nextLine();
        char charset[] = str.toCharArray();
        int alphaCount = 0, digitCount = 0, specialCount = 0;
        for (char ch : charset) {
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                alphaCount++;
            else if (ch >= 48 && ch <= 57) // ASCII values from 0 to 9
                digitCount++;
            else
                specialCount++;
        }
        String spaceRemoved=str.replace(" ", "");
        System.out.println("The string " + str + " has " + alphaCount + " alphabets, " + digitCount + " digits and "
                + specialCount + " special characters");
        System.out.println("The string"+str+" after removing blank spaces became "+spaceRemoved);
    }
}
