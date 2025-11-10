import java.io.FileOutputStream;
import java.io.FileInputStream;
import java.util.Scanner;

public class FileReadWrite {
    public static void main(String args[]) {
        try {
            Scanner scan = new Scanner(System.in);
            System.out.print("Enter the text you want to store: ");
            String str = scan.nextLine();
            FileOutputStream fout = new FileOutputStream("Test.txt");
            for (int i = 0; i < str.length(); i++)
                fout.write(str.charAt(i));
            fout.close();
            FileInputStream fin = new FileInputStream("Test.txt");
            int i = 0;
            System.out.println("Following is the content stored in the file:");
            while ((i = fin.read()) != -1)
                System.out.print((char) i);
            fin.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
