import java.io.*;
public class FileReaderWriter {
    public static void main(String args[]) {
        try {
            File file = new File("TestFileWriter.txt");
            Writer wr = new FileWriter(file);
            wr.write("This is suman the don");
            wr.close();
            Reader rd = new FileReader(file);
            int i = 0;
            while ((i = rd.read()) != -1)
                System.out.print((char)i);
            rd.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
