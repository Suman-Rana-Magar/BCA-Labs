import java.util.Scanner;

public class Celcius {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the temperature in celcius:\t");
        double celcius = scan.nextDouble();
        double fahrenheit = (celcius * 1.8) + 32;
        System.out.println("The temperateur in fahrenheit is " + fahrenheit);
    }
}