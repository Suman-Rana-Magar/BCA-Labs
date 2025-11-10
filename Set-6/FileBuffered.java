import java.io.*;

public class FileBuffered {
    public static void main(String args[]) {
        try {
            File file = new File("TestBuffered.txt");
            FileOutputStream fout = new FileOutputStream(file);
            OutputStream bout = new BufferedOutputStream(fout);
            String str = "this\nis\ntest\nfile";
            for (int i = 0; i < str.length(); i++)
                bout.write(str.charAt(i));
            bout.close();
            fout.close();
            FileInputStream fin = new FileInputStream(file);
            InputStream bin = new BufferedInputStream(fin);
            int i = 0, charCount = 0, wordCount = 0, lineCount = 0;
            while ((i = bin.read()) != -1) {
                System.out.print((char) i);
                if (i == '\n') {
                    lineCount++;
                    wordCount++;
                } else if (i == ' ') {
                    wordCount++;
                    charCount++;
                } else
                    charCount++;
            }
            System.out.println(
                    "\nThe file has " + charCount + " characters, " + wordCount + " words and " + lineCount + " lines");
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
