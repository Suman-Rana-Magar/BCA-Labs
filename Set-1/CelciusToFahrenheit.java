
import java.util.Scanner;

public class CelciusToFahrenheit {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Entere the temperature in Celcius: ");
        float celcius = scan.nextFloat();
        System.out.println(celcius + " degree Celcius = " + (celcius * 1.8 + 32) + " degree Fahrenheit");
    }
}
