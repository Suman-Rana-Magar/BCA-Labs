import java.io.FileInputStream;
import java.io.FileOutputStream;

public class FileCopy {
    public static void main(String args[]) {
        try {
            FileInputStream fin = new FileInputStream("Test.txt");
            FileOutputStream fout = new FileOutputStream("Copy.txt");
            int i = 0;
            while ((i = fin.read()) != -1)
                fout.write(i);
            fin.close();
            fout.close();
            System.out.println("Successfully copied content of Text.txt to Copy.txt");
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
