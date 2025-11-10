import java.util.Scanner;
import java.lang.String;
public class StringLengthAndConversion {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        String str;
        System.out.print("Enter any string: ");
        str=scan.next();
        String subString[] = str.split("");
        int charCount = 0;
        for (String ch : subString)
            charCount++;
        System.out.println("The string " + str + " has " + charCount + " characters");
        System.out.println("Following are string conversion:\nToUpperCase: "+str.toUpperCase()+"\nToLowerCase: "+str.toLowerCase());
    }
}
