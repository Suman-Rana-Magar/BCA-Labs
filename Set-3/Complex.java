import java.util.Scanner;

class Complex {
    double real, imag;

    Complex(double real, double imag) {
        this.real = real;
        this.imag = imag;
    }

    static Complex multiply(Complex c1, Complex c2) {
        double realPart = (c1.real * c2.real) - (c1.imag * c2.imag);
        double imagPart = (c1.real * c2.imag) + (c1.imag * c2.real);
        return new Complex(realPart, imagPart);
    }

    void display() {
        System.out.println(real + " + " + imag + "i");
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter real and imaginary part of first complex number: ");
        double real1 = scan.nextDouble();
        double imag1 = scan.nextDouble();
        Complex c1 = new Complex(real1, imag1);
        System.out.print("Enter real and imaginary part of second complex number: ");
        double real2 = scan.nextDouble();
        double imag2 = scan.nextDouble();
        Complex c2 = new Complex(real2, imag2);
        Complex result = multiply(c1, c2);
        System.out.print("Multiplication Result: ");
        result.display();
    }
}
